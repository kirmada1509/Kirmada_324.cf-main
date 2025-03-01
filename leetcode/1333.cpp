#include <bits/stdc++.h>

vector<int> filterRestaurants(vector<vector<int>> &restaurants,
                              int veganFriendly, int maxPrice,
                              int maxDistance)
{
    vector<int> res;
    stable_sort(restaurants.begin(), restaurants.end(),
                [](const vector<int> &a, const vector<int> &b)
                {
                    if (a[1] == b[1])
                    {
                        return a[0] > b[0]; // If ratings are equal, sort by id (higher first)
                    }
                    return a[1] > b[1]; // Otherwise, sort by rating (higher first)
                });
    for (int i = 0; i < restaurants.size(); i++)
    {
        if (!veganFriendly + restaurants[i][2] &&
            restaurants[i][3] <= maxPrice && restaurants[i][4] <= maxDistance)
            res.push_back(restaurants[i][0]);
    }    
    return res;
}

int main()
{
    vector<vector<int>> restaurants = {{1, 4, 1, 40, 10}, {2, 8, 0, 50, 5}, {3, 8, 1, 30, 4}, {4, 10, 0, 10, 3}, {5, 1, 1, 15, 1}};
    int veganFriendly = 1, maxPrice = 50, maxDistance = 10;
    vector<int> res = filterRestaurants(restaurants, veganFriendly, maxPrice, maxDistance);
    for (int x : res)
    {
        cout << x << " ";
    }
    cout << endl;
}