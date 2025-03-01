#include <bits/stdc++.h>

// int minSwaps(string s)
// {
//     int counter = 0;
//     int open = 0, close = 0;
//     bool reached_end = false;
//     if (s[0] == '[')
//         open++;
//     if (s[0] == ']')
//         close++;
//     for (int i = 1; i < s.size(); i++)
//     {
//         cout<<s<<endl;
//         if (s[i] == '[')
//             open++;
//         if (s[i] == ']')
//             close++;
//         if (close > open)
//         {
//             for (int j = i; j < s.size(); j++)
//             {
//                 if (s[j] == '[')
//                 {
//                     swap(s[i], s[j]);
//                     open = 0;
//                     close = 0;
//                     if (s[i] == '[')
//                         open++;
//                     if (s[i] == ']')
//                         close++;
//                     break;
//                 }
//             }
//         }
//     }

//     return counter;
// }

#include <bits/stdc++.h>
using namespace std;

int minSwaps(string s)
{
    int counter = 0;  // To count the number of swaps
    int imbalance = 0; // To track imbalance of brackets

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '[')
        {
            // Balancing a previous unmatched ']' (decrease imbalance)
            imbalance--;
        }
        else // s[i] == ']'
        {
            // Unmatched closing bracket (increase imbalance)
            imbalance++;
        }

        // Whenever imbalance goes above 0, it means we need a swap
        if (imbalance > 0)
        {
            // Find the next '[' and swap it with the current ']'
            counter++;
            imbalance -= 2; // After the swap, two brackets are balanced
        }
    }

    return counter;
}

int main()
{
    cout << minSwaps("]]][[[") << endl; // Expected output: 2
}
