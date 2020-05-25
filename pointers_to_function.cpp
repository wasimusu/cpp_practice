// http://www.cplusplus.com/doc/tutorial/pointers/
#include <iostream>
#include <memory>

using namespace std;

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int operation(int a, int b, int (*function)(int, int)) {
    return function(a, b);
}

int op2(int a, in b, func){
    func(a, b);
}

int main() {
    cout << operation(7, 5, add) << endl;
    cout << operation(7, 5, subtract) << endl;
    cout << op2(7, 5, add) << endl;
    cout << op2(7, 5, subtract) << endl;
    return 0;
}