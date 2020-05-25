/**
 * Demonstration of various usage of lambdas
 * */

#include <vector>
#include <algorithm>
#include <iostream>
#include <random>

using namespace std;

int main() {
    vector<int> arr = {1, 5, 3, 5, 7, 4, 2, 0, 9};

    // Lambdas can be comaparators
    auto less = [](const int x, const int y) {
        return x < y;
    };
    sort(arr.begin(), arr.end(), less);
    for (int num: arr) cout << num << " ";
    cout << endl;


    // Capture already existing variables through lambda capture &
    shuffle(arr.begin(), arr.end(), default_random_engine());
    vector<int> ii(arr.size());
    iota(ii.begin(), ii.end(), 0);
    sort(ii.begin(), ii.end(), [&](const int i, const int j) {
        return arr[i] < arr[j];
    }); // We sorted the indices according to arr;
    for (int id: ii) cout << id << " ";
    cout << endl;

    // Lambda capture can also be used to manipulate some variable while running a function
    // Let's count odd even numbers while also determining if they are odd or even

    int even_count = 0;
    auto is_even = [&](int num) {
        bool even = num % 2 == 0;
        if (even) ++even_count;
        return even;
    };
    for_each(arr.begin(), arr.end(), is_even);
    cout << "Even count: " << even_count << endl;

}