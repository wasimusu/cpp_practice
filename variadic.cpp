/**
 * https://en.cppreference.com/w/cpp/language/parameter_pack
 *
 * Variadics is a way of defining recursive functions
 * Function with variadic can accpet 0 or more arguments of the same type
 * */

#include <bits/stdc++.h>

using namespace std;


template<class T>
T add(T last) {
    return last;
}

template<class T, class...Args>
T add(T first, Args... args) {
    return first + add(args...);
}

int main() {
    int sum = add(1, 2, 3, 4, 5, 6, 7, 8, 9);
    cout << sum << endl;
    return 0;

}