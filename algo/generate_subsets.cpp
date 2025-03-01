#include<bits/stdc++.h>

void generate(string s,string res, int i){
    if(i == s.length()){
        cout<<res<<endl;
        return;
    }
    generate(s, res + s[i], i+1);
    generate(s, res, i+1);
}

int main(){
    string s = "abc";
    generate(s, "", 0);
}