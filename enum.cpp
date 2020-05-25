#include<iostream>
#include <bits/stdc++.h>


using namespace std;

struct Address {

};

struct Person {
    string name;
    int age;
    Address address;


};

enum oldColor{
    Red, Green, Blue
};
oldColor  oc = Green;

enum class newColor{
    Red, Green, Blue, Magenta
};

newColor nc = newColor::Magenta;

int main(int argc, char **argv) {
    int a = 1;
    int n{4};

    string s{"foo"};
    vector<int> values{1, 2, 3};

    map<string, string> capitals{
            {"UK", "London"}
    };

    auto is_positive = [](int n) { return n > 0; };
    auto is_odd = [](int n) { return n % 2 == 1; };
    auto zero = 0;
    auto is_even = [&zero](int n) { return n % 2 == 0; };
    function<int(int)> fib = [&fib](int x) { return x < 2 ? 1 : fib(x - 1) + fib(x - 2); };
    cout << fib(10) << endl;

    return 0;
}