#include <bits/stdc++.h>
#include "shortcuts.hpp"

using namespace std;

template <typename T> struct dsf {
    vector<T> parent;
    
    dsf(int n) : parent(n) {
        iota(all(parent), 0);
    }
    
    int size() {
        return parent.size();
    }

    int operator[](int index) {
        return find(index);
    }

    int find(int v) {
        if (parent[v] == v)
            return v;
        return parent[v] = find(parent[v]);
    }

    void join(int u, int v) {
        parent[find(u)] = find(v);
    }
};

