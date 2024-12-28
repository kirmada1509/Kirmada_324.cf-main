#include<bits/stdc++.h>
    string longestPrefix(string s) {
        // string l = "", r = "";
        // string res = "";
        int res = 0;
        long long int l = 0, r = 0;
        int n = s.size();
        bool flag = false;
        // if(n == 1)return "";
        long long int p = 31, p_pow = 1;
        const int m = 1e9 + 9;
        for(int i = 0; i < n-1; i++){
            l = (l + (int(s[i]) * p_pow))%m;
            r = ((r * p) + int(s[n - 1 - i]))%m;
            p_pow = (p_pow * p)%m;
            if(l == r){
                // res = s.substr(0, i+1);
                res = i;
                flag = true;
            }
            // cout<<"i: "<<i<<" l: "<<l<<" r: "<<r<<" res: "<<res<<endl;

        }
        if(!flag)return "";
        return s.substr(0, res + 1);
    }

int main(){
    // string s = "aaaa";
    string s = "ababab";
    cout<<endl;
    cout<<longestPrefix(s);
}