#include <thread>
#include <iostream>
#include <vector>
#include <future>


using namespace std;

void foo() {
    cout << "Foo" << endl;
}

void bar() {
    cout << "Bar" << endl;
}

int factorial(int x) {
    if (x == 1 || x == 0) return 1;
    return x * factorial(x - 1);
}

int main() {
    vector<thread> threads;
    threads.emplace_back(std::thread(foo));
    threads.emplace_back(std::thread(bar));
    auto f = std::async(factorial, 5);
    threads[0].join();
    threads[1].join();
    cout << f.get() << endl;
    return 0;
}