#include<bits/stdc++.h>

    // string frequencySort(string s) {
    //     vector<vector<int>> v;
    //     string res = "";
    //     for(int i = 0; i < 127; i++){
    //         v.push_back({i, 0});
    //     }
    //     int size = s.size();
    //     for(int i = 0; i < size; i++){
    //         v[int(s[i])][1]++;
    //     }
    //     sort(v.begin(), v.end(), [](vector<int> a, vector<int> b){
    //         return a[1] > b[1];
    //     });
    //     for(int i = 0; i < 26; i++){
    //         while(v[i][1]--){
    //             if((v[i][0]) <= 9) res += v[i][0];
    //             else res += char(v[i][0]);
    //         }
    //     }
    //     return res;
    // }

    string frequencySort(string s) {
        map<char, int> map;
        string res = "";
        for(char x: s){
            map[x]++;
        }
        // sortM(map);
        for(auto it: map){
            while(it.second--){
                res += it.first;
            }
        }
        return res;
    }

int main(){
    string s = "Aabb";
    cout<<frequencySort(s)<<endl;
}