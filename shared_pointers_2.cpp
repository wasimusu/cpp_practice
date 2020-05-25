#include <memory>
#include <iostream>

using namespace std;

int main() {
    // Traditional way of initializing shared pointer
    shared_ptr<int> sp1(new int(3));
    cout << *sp1 << endl;

    /**
     * Easy to write and more efficient way of making shared pointers
     * When this goes out of scope, it deletes the reference block as well as the object.
     * */
    auto sp2 = make_shared<int>(22);
    cout << *sp2 << endl;

    // You can have custom deleter for the pointer

    cout << "sp1 use_count: " << sp1.use_count() << endl;
    cout << "sp2 use_count: " << sp2.use_count() << endl;

    // sp1, sp3, sp4 share the pointer to the object
    auto sp3 = sp1;
    auto sp4 = sp3;
    cout << "\nsp4 use_count: " << sp1.use_count() << endl;
    cout << "sp2 use_count: " << sp2.use_count() << endl;

    // We reset the counter
    sp1.reset();
    return 0;
}