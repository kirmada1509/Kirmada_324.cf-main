#include<bits/stdc++.h>

string func(string str, int i, string res){
    if(i >= str.size()) return "";
    res += str[i];
    return func(str, i+1, res);
}

int main(){
    cout<<func("ABC", 0, "")<<endl;
}