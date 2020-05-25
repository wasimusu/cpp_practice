#include <bits/stdc++.h>


using namespace std;

/**
 * In the compiled version, there is square function for each possible type
 * This is called bloat
 * For function you may as well not have to specify the data type
 * For template class you have to specify the data type
 * */
template<class T>
T square(T x) {
    return x * x;
}


template<class T>
class BoVector {
    T arr[1000];
    int size;
public:
    BoVector() : size(0) {}

    void push(T x) {
        arr[size] = x;
        size++;
    }

    T get(int i) const { return arr[i]; }

    int getSize() const { return size; }

    void print() const {
        for (int i = 0; i < size; i++) cout << arr[i] << " ";
        cout << endl;
    }
};

template<class T>
BoVector<T> operator*(const BoVector<T> &rhs1, const BoVector<T> &rhs2) {
    BoVector<T> ret;
    for (int i = 0; i < rhs1.getSize(); i++) {
        ret.push(rhs1.get(i) * rhs2.get(i));
    }
    return ret;
}

// Template specialization. Does not necessarily result in code redundancy.
//https://www.learncpp.com/cpp-tutorial/137-partial-template-specialization/
template<class T, int size>
class MyArray {
private:
    T arr[size];
public:
    T *get_array() { return arr; }

    T &operator[](int index) {
        return arr[index];
    }
};

template<typename T, int size>
void print(MyArray<T, size> &arr) {
    for (auto var: arr) cout << var << ", ";
    cout << endl;
}


// Specialized for array of length 14
template<>
void print(MyArray<char, 14> &arr) {
    for (int count{0}; cout << 14; ++count) {
        cout << arr[count];
    }
    cout << endl;
}


int main() {
    cout << square<int>(5) << endl;
    cout << square<double>(5.5) << endl;

    BoVector<int> bv;
    bv.push(2);
    bv.push(5);
    bv.push(8);
    bv.push(9);
    bv.push(11);

    bv.print();

    bv = square(bv);
    bv.print();
    return 0;
}