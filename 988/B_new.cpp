#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> freq;

        for (int i = 0; i < n; ++i)
        {
            int val;
            cin >> val;
            freq[val]++;
        }

        int values = n - 2;
        int row = 0, col = 0;

        for (int i = 1; i <= 200000; ++i)
        {
            if (freq.find(i) != freq.end())
            {
                int rowsCount = freq[i];
                int div = values / i;
                int rem = values % i;

                if (rem == 0)
                {
                    if (freq.find(div) != freq.end())
                    {
                        int colCount = freq[div];

                        if (i == div)
                        {
                            if (colCount >= 2)
                            {
                                row = i;
                                col = div;
                                break;
                            }
                        }
                        else
                        {
                            row = i;
                            col = div;
                            break;
                        }
                    }
                }
            }
        }

        cout << row << " " << col << endl;
    }
    return 0;
}
