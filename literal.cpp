#include <iostream>

using namespace std;

// User defined literals
constexpr long double operator "" _cm(long double x) { return x * 10; }

constexpr long double operator "" _m(long double x) { return x * 1000; }

constexpr long double operator "" _mm(long double x) { return x; }

int main() {
    long double height = 3.4_cm;
    cout << height << endl;
    cout << (height + 12.0_m) << endl;
    return 0;
}