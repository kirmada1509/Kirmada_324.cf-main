#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define get(A, N)                         \
    for (int i = 0; i < N; i++)           \
    {                                     \
        int temporary_for_input;          \
        cin >> temporary_for_input;       \
        A.push_back(temporary_for_input); \
    }
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b) { return a > b; })
#define print(A)              \
    {                         \
        for (int x : A)       \
            cout << x << " "; \
    }                         \
    cout << endl;

void solve()
{
    // float a, b, c;
    // cin >> a >> b >> c;
    // if (a >= c)
    // {
    //     cout << -1 << " " << (int)b << endl;
    //     return;
    // }
    // if (a < c / b)
    // {
    //     cout << 1 << " " << -1 << endl;
    //     return;
    // }
    // if (a > c / b)
    // {
    //     cout << 1 << " " << (int)b << endl;
    //     return;
    // }
    // if (a == c / b)
    // {
    //     if (c == 1)
    //     {
    //         cout << -1 << " " << -1 << endl;
    //         return;
    //     }
    //     else
    //     {
    //         cout << 1 << " " - 1 << endl;
    //     }
    // }

    long long a, b, c;
    cin >> a >> b >> c;
    if (a < c)
    {
        cout << 1 << " ";
    }
    else
    {
        cout << -1 << " ";
    }
    if (c < b * a)
    {
        cout << b << endl;
    }
    else
    {
        cout << -1 << endl;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}