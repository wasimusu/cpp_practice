include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> vec = {9, 60, 90, 9, 45, 87, 90, 69, 69, 55, 7};

    // Sorting requires random access iterators
    // vector, deque, container array, native array

    sort(vec.begin(), vec.end(), less<int>());

    auto lsb_less = [](int x, int y) { return (x % 10) < (y % 10); };
//    sort(vec.begin(), vec.end(), lsb_less);

    // Problem 1. Finding top 5 students according to their cpp_practice scores
    partial_sort(vec.begin(), vec.begin() + 5, vec.end(), greater<int>());

    shuffle(vec.begin(), vec.end(), default_random_engine());

    // Problem 2. Finding top 5 students according to their cpp_practice score without regard to their ranks
    nth_element(vec.begin(), vec.begin() + 5, vec.end(), greater<int>());


    // Problem 3. Move the minimum scorers to the front
    auto lst = [](int x) { return x < 10; };
    partition(vec.begin(), vec.end(), lst);

    stable_partition(vec.begin(), vec.end(), lst);
    for (auto x: vec) cout << x << " ";
    cout << endl;
    return 0;
}