#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Reads N elements from input into vector A
#define get(A, N, T) for (int i = 0; i < N; i++) { \
    T t; \
    cin >> t; \
    A.push_back(t); \
}
// Sorts first n elements vector A in asscending order
#define sort_ass(A, n) sort(A.begin(), A.begin() + n)

// Sorts first n elements vector A in descending order
#define sort_des(A, n) sort(A.begin(), A.begin() + n, [](int a, int b) { \
    return a > b; \
})

// Prints all elements in vector A
#define print_v(A) { \
    for (auto x: A) cout << x << " "; \
    cout << endl; \
}

void solve() {

}

int main() {
    int T;
    cin >> T;
    while (T--) solve();
}