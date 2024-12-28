#include<bits/stdc++.h>

    // vector<int> findAnagrams(string s, string p) {
    //     unordered_map<char, int> map_s, map_p, temp;
    //     deque<char> dq;
    //     vector<int> res;
    //     for(char c: p) map_p[c]++; temp = map_p;
    //     int go_back = 0;
    //     for(int i = 0; i < s.size(); i++){
    //         if(temp.find(s[i]) != temp.end()){
    //             if(--temp[s[i]] <= 0)temp.erase(s[i]);
    //             if(temp.size() == 0){
    //                 // cout<<"found at:"<<i<<endl;
    //                 res.push_back(i-p.size()+1);
    //             }
    //             go_back++;
    //         }else{
    //             i = i - go_back;
    //             go_back = 0;
    //             temp = map_p;
    //         }
    //         // for(auto it: temp)cout<<it.first<<" ";
    //         // cout<<endl;
    //     }
    //     return res;
    // }

    vector<int> findAnagrams(string s, string p) {
        if (s.size() < p.size()) return {};
        vector<int> res;
        vector<int> S(26,0), P(26,0);
        int i = 0;
        for(i = 0; i < p.size(); i++){
            S[s[i]-'a']++;
            P[p[i]-'a']++;
        }
        i--;
        if(S == P)res.push_back(i - p.size()+1);
        for(int i = p.size(); i < s.size(); i++){
            S[s[i-p.size()]-'a']--;
            S[s[i]-'a']++;
            if(S == P)res.push_back(i - p.size()+1);
        }
        return res;
    }

int main(){
    string s = "aaaaaaaaaa", p = "aaaaaaaaaa";
    for(int x: findAnagrams(s, p)) cout<<x<<" ";
    cout<<endl;
}