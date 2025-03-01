#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int even = 0;
    int odd = 0;
    int m = 0;
    int k = 0;
    for(int i = 0; i < n; i++){
        if( arr[i] % 2 == 0){
            even++;
            m = i + 1;
        }else{
            odd++;
            k = i + 1;
        }
    }
    if(even > odd){
        cout<<k<<endl;
    }else{
        cout<<m<<endl;
    }

    return 0;
}