#include <bits/stdc++.h>

using namespace std;

std::atomic<int> a = 0;

void increment_counter() {
    for (int j = 0; j < 1000; j++) {
        for (int i = 0; i < rand() % 1000; i++) rand();
        ++a;
    }
}

int main() {
    std::thread t1(increment_counter);
    std::thread t2(increment_counter);
    t1.join();
    t2.join();
    assert(a == 2000);
    cout << a << endl;

}