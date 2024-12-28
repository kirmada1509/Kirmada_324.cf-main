#include<bits/stdc++.h>

int arr_sum(int arr[], int n){
    int res = 0;
    for(int i = 0; i < n; i++){
        res += arr[i];
    }
    return res;
}

void cut(int arr[], int k, int n){
    int max = *max_element(arr, arr+n);
    int end = arr_sum(arr, n);
    int count = k;
    while(count != 0){
        int window = 0;
        int search = (max + end) / 2;
        for(int i = 0; i < n; i++){
            if(window < search){
                window += arr[i];
            }
            if(window >= search){
                window = 0;
                window += arr[i];
                count--;
            }
            cout<<"count: "<<count<<" window: "<<window<<" search: "<<search<<endl;
        }
        cout<<endl;
        if(count > 0){
            count = k;
            end = search;
        }
    }
}

int main(){
    int arr[] = {12, 34, 67, 90};
    int k = 2;
    int n = 4;
    cut(arr, k, n);
}