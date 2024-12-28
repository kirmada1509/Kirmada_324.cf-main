#include <iostream>
#include <string>
#include <cmath>
using namespace std;

char flip(char c) {
    if (c >= 'A' && c <= 'Z') return c + 32;
    return c - 32;
}

int main() {
    string S;
    cin >> S;
    int Q;
    cin >> Q;
    long long len = S.length();
    for (int i = 0; i < Q; i++) {
        long long k;
        cin >> k;
        long long op_count = log2(k);
        long long len_after_ops = len * (1 << op_count);
        long long mid = len_after_ops / 2;
        
        if (k <= mid) {
            cout << S[k - 1] << endl;
        } else {
            k = k - mid;
            cout << flip(S[k - 1]) << endl;
        }
    }
    return 0;
}
