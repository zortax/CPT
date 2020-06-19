#include <bits/stdc++.h>
using namespace std;

struct __bit {
    vector<int> *data;

    __bit(int size) {
        this->data = new vector<int>(size);
    }

    ~__bit() {
        delete this->data;
    }

    int operator[](int index) {
        return this->query(index);
    }

    int size() {
        return this->data->size();
    }

    int query(int r) {
        int res = 0;
        for (; r > 0; r &= r - 1)
            res += (*(this->data))[r - 1];
        return res;
    }

    void update(int i, int v) {
        for(; i < this->size(); i |= i + 1)
            (*(this->data))[i] += v;
    }

};

typedef __bit bit;

int main() {
    
    int val[] = { 1, 3, 7 };
    
    bit fenwick_tree(4);

    for (int i = 0; i < 3; i++) {
        fenwick_tree.update(i, val[i]);
    }

    for (int i = 0; i < 4; i++) {
        cout << fenwick_tree[i] << endl;
    }

    return 0;
}

