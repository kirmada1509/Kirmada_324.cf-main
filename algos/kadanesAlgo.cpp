#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {5, 4, 1, 7, 8};
    int sum = 0;
    int res = 0;
    for(int i = 0; i < arr.size(); i++){
        sum = max(arr[i], sum + arr[i]);
        res = max(sum, res);
        cout<<i<<": "<<res<<endl;
    }
    cout<<res<<endl;
    return 0;
}