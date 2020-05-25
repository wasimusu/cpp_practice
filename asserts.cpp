#include <bits/stdc++.h>

using namespace std;

template<typename T, size_t Size>
class Values {
    static_assert(Size > 1, "Use a scalar");
    T Values[Size];
};

template<typename T, typename U>
auto add(T t, U u) {
    static_assert(is_integral<T>::value, "First value must be int");
    return t + u;
}

int main() {
    Values<int, 2> stuff{};

    cout << add(1, "b") << endl;
    return 0;
}