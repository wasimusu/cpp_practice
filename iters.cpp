#include <bits/stdc++.h>

using namespace std;

int main() {
    // Random Access Iterator: Vector, deque, array
    vector<int>::iterator itr, itr2;
    itr = itr + 5;
    itr = itr - 4;
    if (itr2 > itr) {}
    ++itr;  // faster than itr++
    --itr;

    // Bidirectional iterator: list, set/multiset, map/multimap
    list<int>::iterator itr3;
    ++itr;
    --itr;

    // 3. Forward iterator: forward_list
    forward_list<int> itr4;
    ++itr;

    // Unordered containers provide at least forward iterators
    // 4. Input iterator: read and process values while iterating forward
//    int x = *itr;

    // 5. Output iterator: output values while iterating forward
//    *itr = 100;

    // Every container has an iterator and a const iterator
    set<int>::iterator itr5;
    set<int>::const_iterator citr; // Read only access to the container elements

    set<int> myset = {2, 4, 5, 1, 9};
    for (citr = myset.begin(); citr != myset.end(); ++citr)
        cout << *citr << endl;

    auto is_even = [](int x) { cout << ((x % 2 == 0) ? "Even" : "Odd") << endl; };
    for_each(myset.cbegin(), myset.cend(), is_even); // read only

    /*
     * Iterator Adapator (Predefined Iterator
     * A special more powerful iterator
     * 1. Insert iteator
     * 2. Stream iterator
     * 3. Reverse iterator
     * 4. Move iterator/
     */

    // 1. Insert iterator
    vector<int> vec1 = {4, 5};
    vector<int> vec2 = {12, 14, 16, 18};
    vector<int>::iterator it = find(vec2.begin(), vec2.end(), 16);
    insert_iterator<vector<int>> i_itr(vec2, it);
    copy(vec1.begin(), vec1.end(), i_itr); //(source, destination)

    vector<string> vec4;
//    copy(istream_iterator<string>(cin), istream_iterator<string>(), back_inserter(vec4));
//    copy(vec4.begin(), vec4.end(), ostream_iterator<string>(cout, " "));

    // 3. Reverse iterator
    vector<int> vec5 = {4, 5, 6, 7};
    vector<int>::reverse_iterator ritr;
    for (ritr = vec5.rbegin(); ritr != vec5.rend(); ++ritr)
        cout << *ritr << endl;

    vector<int> vec6 = {4, 2, 5, 1, 3, 9};
    vector<int>::iterator itr6 = min_element(vec6.begin(), vec6.end());
    sort(vec6.begin(), itr6);
    reverse(itr, vec6.end());

    // Note 2
    vector<int> vec7(3);
    copy(itr, vec6.end(), vec2.begin()); //(source, source, destination)




    return 0;
}
