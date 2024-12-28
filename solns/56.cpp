#include<bits/stdc++.h>

vector<vector<int>> merge(vector<vector<int>>& arr) {
    if (arr.empty()) return {};

    // Sort intervals based on start times
    sort(arr.begin(), arr.end());
    
    vector<vector<int>> merged;
    merged.push_back(arr[0]);

    for (int i = 1; i < arr.size(); i++) {
        // If current interval overlaps with the last merged interval, merge them
        if (merged.back()[1] >= arr[i][0]) {
            merged.back()[1] = max(merged.back()[1], arr[i][1]);
        } else {
            // No overlap, add current interval to `merged`
            merged.push_back(arr[i]);
        }
    }
    return merged;
}

int main(){
    vector<vector<int>> intervals = {{1, 3}, {2, 6}, {8, 10}, {15, 18}};
    // vector<vector<int>> intervals = {{1, 4}, {5, 6}};
    vector<vector<int>> res = merge(intervals);
    for(int i = 0; i < res.size(); i++){
        cout<<res[i][0]<<" "<<res[i][1]<<endl;
    }
}