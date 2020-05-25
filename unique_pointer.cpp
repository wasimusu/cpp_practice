#include <iostream>
#include <memory>

using namespace std;

class B {

};

int main() {
    int N = 10;
    auto unq_ptr = make_unique<int>(N);
    for (int i = 0; i < N; i++) {
        *(unq_ptr) = i;
    }
    cout << sizeof(unq_ptr) << endl;
    std::unique_ptr<char[]> p(new char[1000000]); // allocates storage for 1000000 chars
    std::unique_ptr<int[]> ii(new int[10]); // allocates storage for 1000000 chars
    for (int i = 0; i < 10; i++) {
        ii[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        cout << ii[i] << endl;
    }


    unique_ptr<B[]> bb(new B[10]);
    unique_ptr<B> cc(new B);
    shared_ptr<B> ss(new B);

    return 0;
}