#include <bits/stdc++.h>
using namespace std;

template <typename T> struct bit {
    vector<T> *data;

    bit(int size) {
        this->data = new vector<T>(size);
    }

    ~bit() {
        delete this->data;
    }

    T operator[](int index) {
        return this->query(index);
    }

    int size() {
        return this->data->size();
    }

    T query(int r) {
        T res = 0;
        for (; r > 0; r &= r - 1)
            res += (*(this->data))[r - 1];
        return res;
    }

    void update(int i, T v) {
        for(; i < this->size(); i |= i + 1)
            (*(this->data))[i] += v;
    }

};

int main() {
    
    int val[] = { 1, 3, 7 };
    
    bit<int> fenwick_tree(4);

    for (int i = 0; i < 3; i++) {
        fenwick_tree.update(i, val[i]);
    }

    for (int i = 0; i < 4; i++) {
        cout << fenwick_tree[i] << endl;
    }

    return 0;
}

