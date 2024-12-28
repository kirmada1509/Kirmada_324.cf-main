#include<bits/stdc++.h>

    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> v1, v2, res;
        v1 = arr;
        sort(v1.begin(), v1.end());
        map<int, int> mp;
        int minus = 0;
        for(int i = 0; i < v1.size(); i++){
            if(mp[v1[i]] > 0){
                minus++;
                continue;
            }else{
                mp[v1[i]] = i + 1 - minus;
            }
        }
        for(int x: arr){
            res.push_back(mp[x]);
        }
        return res;
    }

int main(){
    vector<int> arr = {40,10,20,30};
    vector<int> res = arrayRankTransform(arr);
    for(int x: res){
        cout<<x<<" ";
    }
    cout<<endl;
}
