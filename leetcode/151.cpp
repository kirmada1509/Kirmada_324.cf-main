#include<bits/stdc++.h>
    string func(string s) {
        vector<string> v;
        string res = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] == ' '){
                if(res != "") {
                    cout<<"pushing: "<<res<<endl;
                    v.push_back(res);
                    res = "";
                }
            }else{
                res += s[i];
            }
        }
        v.push_back(res);
        res = "";
        reverse(v.begin(), v.end());
        for(int i = 0; i < v.size(); i++){
            res = res + v[i] + (i == v.size()-1 ? "":" ");
        }
        cout<<endl;
        return res;
    }

int main(){
    string s = "a good   example";
    cout<<func(s)<<endl;
}