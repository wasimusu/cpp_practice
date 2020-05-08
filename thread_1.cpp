#include <bits/stdc++.h>

using namespace std;

void foo() {
    cout << "Foo" << endl;
}

void bar() {
    cout << "Bar" << endl;
}

void factorial(int num, int &res) {
    res = 1;
    res = 20;
}

int main() {
    vector<thread> threads;
    int res;
    threads.emplace_back(std::thread(foo));
    threads.emplace_back(std::thread(bar));
    threads.push_back(std::thread(factorial, 10, std::ref(res)));
    threads[0].join();
    threads[1].join();
    threads[2].join();
    cout << res << endl;
    return 0;
}