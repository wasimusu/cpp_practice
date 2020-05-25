#include <thread>
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

long long operation(const int x) {
    return x * x * x;
}

void parallel_helper(vector<int> &arr, vector<int> &res, int start, int end) {
    for (int i = start; i < end; i++) {
        res[i] = operation(arr[i]);
    }
}


void parallel_op(vector<int> &arr, vector<int> &res) {
    auto start = std::chrono::system_clock::now();
    int num_threads = thread::hardware_concurrency();
    vector<std::thread> threads(num_threads);
    int step = arr.size() / num_threads;
    for (int i = 0; i < num_threads; i++) {
        threads[i] = thread(parallel_helper, std::ref(arr), std::ref(res), i * step, (i + 1) * step);
    }

    for (int i = 0; i < num_threads; i++) {
        threads[i].join();
    }

    auto stop = std::chrono::system_clock::now();
    std::cout << "Parallel took: " << std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count()
              << std::endl;

}

void serial_op(vector<int> &arr, vector<int> &res) {
    auto start = std::chrono::system_clock::now();
    for (int i = 0; i < arr.size(); i++) {
        res[i] = operation(arr[i]);
    }
    auto stop = std::chrono::system_clock::now();
    std::cout << "Serial took: " << std::chrono::duration_cast<std::chrono::milliseconds>(stop - start).count()
              << std::endl;
}

int main() {
    int N = 80000000;
    vector<int> arr(N), res(N);
    iota(arr.begin(), arr.end(), rand() % 100);

    parallel_op(arr, res);
    serial_op(arr, res);

    return 0;
}