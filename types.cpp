#include <typeinfo>
#include <iostream>

using namespace std;

int main() {
    auto x = 5;
    char *greeting = "hello, world!";
    double interest = 5.12;
    int *ptr = &x;

    decltype(x) xx = x;
    cout << "xx type is same as x : " << xx << endl;
}