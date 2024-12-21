#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define get_v(A, N)                       \
    for (int i = 0; i < N; i++)           \
    {                                     \
        int temporary_for_input;          \
        cin >> temporary_for_input;       \
        A.push_back(temporary_for_input); \
    }
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_desi(A) sort(A.begin(), A.end(), [](int a, int b) { return a > b; })
#define print(A)              \
    {                         \
        for (int x : A)       \
            cout << x << " "; \
    }                         \
    cout << endl;

void solve()
{
    long long int N, m, killed;
    cin >> N >> m;
    int x, y;
    vector<pair<int, int>> M(m, {0, 0});
    unordered_set<int> horizontal, vertical, front_slash, back_slash;
    // unordered_map<int, int> front_slash, back_slash;

    for (int i = 0; i < m; i++)
    {
        cin >> M[i].first >> M[i].second;
        horizontal.insert(M[i].first);
        vertical.insert(M[i].second);
        front_slash.insert(M[i].first + M[i].second);
        back_slash.insert(M[i].first - M[i].second);
    }

    killed += (N - horizontal.size()) * (N - vertical.size());
    long long int res = N * N - killed + m;
    cout<<"res: "<<res;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    solve();
    return 0;
}