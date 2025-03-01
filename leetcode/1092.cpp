#include <bits/stdc++.h>
using namespace std;

void f(string str1, string str2) {
    string s1 = str1, s2 = str2;

    if (s1.size() > s2.size()) swap(str1, str2);

    while (!s2.empty() && (s1.size() < s2.size() || s1.substr(0, s2.size()) != s2)) {
        s2 = s2.substr(1, s2.size() - 1);
    }

    string res1 = str2.substr(0, str2.size() - s2.size()) + str1;

    s1 = str1;
    s2 = str2;

    while (!s2.empty() && (s1.size() < s2.size() ||
        s1.substr(s1.size() - s2.size(), s2.size()) != s2.substr(0, s2.size()))) {
        s2 = s2.substr(0, s2.size() - 1);
    }

    string res2 = str1 + str2.substr(s2.size(), str2.size() - s2.size());
    cout << res1 << endl;
    cout << res2 << endl;
}

int main() {
    f("abac", "cab");
}