#include<bits/stdc++.h>
    int lengthOfLongestSubstring(string s) {
        vector<int> v(128, 0);
        int n = s.size();
        int res = n > 0 ? 1:0, count = 0;
        for(int i = 0; i < n; i++){
            if(v[s[i]] == 0){
                count++;
                v[s[i]]++;
            }
            else{
                i = i - count;
                res = max(res, count);
                count = 0;
                fill(v.begin(), v.end(), 0);
            }
            res = max(res, count);
        }
        return res;
    }
    
int main(){
    string s = "au";
    cout<<lengthOfLongestSubstring(s)<<endl;
}