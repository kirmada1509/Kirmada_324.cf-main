#include<bits/stdc++.h>

int countPalindromicSubsequence(string s) {
    map<char, int> mp, mp_copy;
    set<char> visited;
    int n = s.size();
    int count = 0;
    for(int i = 0; i < n; i++){
        mp[s[i]]++;
        // cout<<s[i]<<mp[s[i]]<<endl;
    }
    // for(auto it: mp)cout<<it.first;
    mp_copy = mp;
    for(int l = 0; l < n; l++){
        int r = n-1;
        
        char c_l = s[l];
        char c_r = s[r];
        if(visited.find(c_l) != visited.end()) continue;

        mp[l]--;
        mp_copy[l]--;
        if(mp[c_l] <= 0)mp.erase(c_l);
        if(mp_copy[c_l] <= 0)mp_copy.erase(c_l);

        while(c_l != c_r && l < r-2){
            mp_copy[c_r]--;
            if(mp_copy[c_r] <= 0)mp_copy.erase(c_r);
            r--;
        }
        if(c_l != c_r)continue;
        visited.insert(c_l);

        mp_copy[c_r]--;
        if(mp_copy[c_r] <= 0)mp_copy.erase(c_r);
        for(auto it: mp_copy)cout<<it.first;
        count += mp_copy.size();
        mp_copy = mp;
    }
    return count;
}


int main(){
    string s = "bbcbaba";
    cout<<countPalindromicSubsequence(s)<<endl;
}

