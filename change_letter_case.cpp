#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    string str = "hello, word";
    std::cout << str << " : ";
    transform(str.begin(), str.end(), str.begin(), [](char c) {
        return toupper(c);
    });
    cout << str << endl;
    return 0;
}