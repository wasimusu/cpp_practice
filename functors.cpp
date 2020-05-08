#include <bits/stdc++.h>

using namespace std;

template<typename T>
class plus_ {
public:
    constexpr T operator()(const T &lhs, const T &rhs) const {
        return lhs + rhs;
    }
};

template<typename T>
class minus_ {
public:
    constexpr T operator()(const T &lhs, const T &rhs) const {
        return lhs - rhs;
    }
};

template<typename T>
class less_ {
public:
    constexpr bool operator()(const T &lhs, const T &rhs) const {
        return lhs < rhs;
    }
};


int main() {
    vector<int> vec = {2, 3, 4, 1, 0, 7, 6};
    sort(vec.begin(), vec.end(), less_<int>{}); // sort in ascending order
    copy(vec.begin(), vec.end(), ostream_iterator<int>{std::cout, " "});

    /**
     * Built in functors
     *
     * less, greater, greater_equal, less_equal, not_equal_to,
     * logical_and, logical_not, logic_or,
     *
     * */

    return 0;
}