#include <bits/stdc++.h>

using namespace std;


class Dog {
private:
    string name;
    int age;
public:
    Dog(const string &name, const int age) : name(name), age(age) {}
};

int main() {
    // Assign it to shared pointer as soon as an object is created
    shared_ptr<Dog> d_shared = make_shared<Dog>("Gunner", 10);
    shared_ptr<Dog> d1 = d_shared;

    cout << d_shared.use_count() << endl;
    cout << d1.use_count() << endl;

    return 0;
}