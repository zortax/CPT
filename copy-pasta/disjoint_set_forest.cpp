#include <bits/stdc++.h>
#include "shortcuts.hpp"

using namespace std;

#define st typename vector<T>::size_type
template <typename T> struct dsf {
    vector<T> parent;
    
    dsf(st n) : parent(n) {
        iota(all(parent), 0);
    }
    
    st size() {
        return parent.size();
    }

    int operator[](st index) {
        return find(index);
    }

    int find(st v) {
        if (parent[v] == v)
            return v;
        return parent[v] = find(parent[v]);
    }

    void join(st u, st v) {
        parent[find(u)] = find(v);
    }
};

