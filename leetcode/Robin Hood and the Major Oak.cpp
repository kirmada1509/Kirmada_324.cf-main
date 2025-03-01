#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int test = 0; test < t; test++)
    {
        int n, k;
        cin >> n >> k;
        int odds = 0;
        if ((n - k + 1) % 2 == 0 && n % 2 == 0) odds = (k - 1) / 2;
        else odds = (k + 1) / 2;
        cout << ((odds) % 2 == 0 ? "YES" : "NO") << endl;
    }
}