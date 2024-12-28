#include<bits/stdc++.h>
    bool canArrange(vector<int>& arr, int k) {
        int arr_size = arr.size();
        vector<int> freq(k, 0);
        for(int i = 0; i < arr_size; i++){
            // cout<<arr[i]<<": ";
            arr[i] = ((arr[i] % k) + k) % k;
            // cout<<arr[i]<<endl;
            freq[arr[i]]++;
        }
        // for(int x: freq){
        //     cout<<x<<" ";
        // }
        cout<<endl;
        if((freq[0] % 2) != 0){
            return false;
        }
        for(int i = 1; i <= k / 2; i++){
            if(freq[i] != freq[k - i]){
                return false;
            }
        }
        return true;
    }

int main(){
    vector<int> arr = {-1,1,-2,2,-3,3,-4,4}; int k = 3;
    // vector<int> arr = {1,2,3,4,5,10,6,7,8,9}; int k = 5;
    cout<<canArrange(arr, k)<<endl;
    // cout<<binary(arr, 3, 5, 4)<<endl;
}