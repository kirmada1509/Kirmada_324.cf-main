#include <bits/stdc++.h>
vector<vector<int>> groupThePeople(vector<int> &groupSizes)
{
    vector<vector<int>> result;
    map<int, vector<int>> mp;

    for (int i = 0; i < groupSizes.size(); i++)
    {
        if (mp[groupSizes[i]].size() == groupSizes[i])
        {
            result.push_back(mp[groupSizes[i]]);
            mp[groupSizes[i]] = {};
        }
        if (mp[groupSizes[i]].size() < groupSizes[i])
        {
            mp[groupSizes[i]].push_back(i);
        }
    }
    map<int, vector<int>> it;
    for(auto const& [key, val] : mp){
        result.push_back(val);
    }
    return result;
}

int main(){
    vector<int> groupSizes = {2,1,3,3,3,2};
    // vector<int> groupSizes = {3,3,3,3,3,1,3};
    vector<vector<int>> result = groupThePeople(groupSizes);
    for(int i = 0; i < result.size(); i++){
        for(int j = 0; j < result[i].size(); j++){
            cout<<result[i][j]<<" ";
        }
        cout<<endl;
    }
}