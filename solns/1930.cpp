#include<bits/stdc++.h>

int countPalindromicSubsequence(string s) {
    set<char> visited;
    map<char, int> mp, mp_copy;
    int n = s.size();
    int count = 0;

    for(int i = 0; i < n; i++){
        mp[s[i]]++;
    }
    mp_copy = mp;

    for(int i = 0; i < n; i++){
        int l = i; char c_l = s[l];
        mp_copy[c_l]--;
        mp[c_l]--;

        if(mp[c_l] <= 0)mp.erase(c_l);
        if(mp_copy[c_l] <= 0)mp_copy.erase(c_l);

        if(visited.find(c_l) != visited.end()) continue;

        int r = n-1; char c_r = s[r];
        while(c_r != c_l && l < r){
            r--;
            c_r = s[r];
            if(c_r != c_l) mp_copy[c_r]--;
            if(mp_copy[c_r] <= 0)mp.erase(c_r);
        }
        if(c_l != c_r) continue;
        else {
            visited.insert(c_l);
            mp_copy[c_r]--;
        }
        if(mp_copy[c_r] <= 0)mp_copy.erase(c_r);
        count += mp_copy.size();
        mp_copy = mp;
    }
    return count;
}


int main(){
    string s = "bbcbaba";
    cout<<countPalindromicSubsequence(s)<<endl;
}

