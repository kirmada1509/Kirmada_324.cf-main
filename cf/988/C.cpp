#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n < 5)
            cout << -1 << endl;
        else
        {

            for (int i = 2; i <= n; i++)
            {
                if (i == 4)
                    continue;
                if (i % 2 == 0)
                    cout << i << " ";
            }
            for (int i = 1; i <= n; i++)
            {
                if (i == 5)
                    continue;
                if (i % 2 != 0)
                    cout << i << " ";
            }
            cout << 4 << " " << 5 << " ";
            cout << endl;
        }
    }
    return 0;
}