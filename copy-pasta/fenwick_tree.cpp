#include <bits/stdc++.h>
#include "shortcuts.hpp"

using namespace std;

template <typename T> struct bit {
    vector<T> data;

    bit(int size) : data(size) {}

    T operator[](int index) {
        return query(index);
    }

    int size() {
        return data.size();
    }

    T query(int r) {
        T res = 0;
        for (; r > 0; r &= r - 1)
            res += data[r - 1];
        return res;
    }

    void update(int i, T v) {
        for(; i < size(); i |= i + 1)
            data[i] += v;
    }

};

int main() {
    
    int val[] = { 1, 3, 7 };
    
    bit<int> fenwick_tree(4);

    rep(i, 3) {
        fenwick_tree.update(i, val[i]);
    }

    rep(i, 4) {
        cout << fenwick_tree[i] << endl;
    }

    return 0;
}

