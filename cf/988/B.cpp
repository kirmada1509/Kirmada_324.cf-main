// #include <iostream>
// #include <bits/stdc++.h>
// using namespace std;

// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int k;
//         cin >> k;

//         vector<int> a(k);
//         unordered_set<int> values;
//         for (int i = 0; i < k; i++)
//         {
//             cin >> a[i];
//             values.insert(a[i]);
//         }

//         int n = 1, m = k;

//         for (int i = 1; i <= sqrt(k); i++)
//         {
//             if (k % i == 0)
//             {
//                 int possible_n = i;
//                 int possible_m = k / i;

//                 if (values.count(possible_n) && values.count(possible_m))
//                 {
//                     n = possible_n;
//                     m = possible_m;
//                     break;
//                 }
//             }
//         }

//         cout << n << " " << m << endl;
//     }

//     return 0;
// }
import java.util.*;
public
class Solve
{
public
    static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        while (t > 0)
        {
            int n sc.nextInt();
            HashMap<Integer, Integer> h = new HashMap<>();
            for (int i = 0; i < n; i++)
            {
                int val sc.nextInt();
                if (h.get(val) == null)
                {
                    h.put(val, 1);
                }
                else
                {
                    int p h.get(val);
                    p++;
                    h.put(val, p);
                }
            }
            int values = n - 2;
            int row = 0;
            int col = 0;
            for (int i = 1; i <= 200000; i++)
            {
                if (h.get(i) != null)
                {
                    int rowsCount = h.get(i);
                    int div values / i;
                    int rem values % i;
                    if (rem == 0)
                    {
                        if (h.get(div) != null)
                        {
                            int colCount = h.get(div);
                            if (i == div)
                            {
                                if (colCount >= 2)
                                {
                                    // got ans here
                                    row = i;
                                    col = div;
                                    break;
                                }
                                else
                                {
                                    // can't possible
                                }
                            }
                            else
                            {
                                // got ans here
                                row = i;
                                col = div;
                                break;
                            }
                        }
                    }
                }
            }
