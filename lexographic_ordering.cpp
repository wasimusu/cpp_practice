/**
 *
 * https://cpppatterns.com/patterns/lexicographic-ordering.html
 *
 * Use tuple to order two or more variables.
 * Implementing it using multiple if else statements or ternary op is too cumbersome.
 * */

#include <tuple>

class foo {
public:
    foo(int n_, char c_, double d_)
            : n{n_}, c{c_}, d{d_} {}

    friend bool operator<(const foo &lh, const foo &rh) {
        return std::tie(lh.n, lh.c, lh.d) <
               std::tie(rh.n, rh.c, rh.d);
    }

private:
    int n;
    char c;
    double d;
};