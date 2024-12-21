// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// int main(){}

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int count = 0, input;
        unordered_map<int, int> map;
        for(int i = 0; i < n; i++){
            cin>>input;
            map[input]++;
        }
        for(auto it: map){
            count+= it.second / 2;
        }
        cout<<count<<endl;
        // cout<<"count: "<<count<<endl;
    }
}