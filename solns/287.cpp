#include<bits/stdc++.h>

    int findDuplicate(vector<int>& arr) {
        int slow = 0;
        int fast = arr[slow];
        int count = 0;
        while((arr[slow] != arr[fast]) && count < 20){
            cout<<"slow: "<<arr[slow]<<" fast: "<<arr[fast]<<endl;
            fast = arr[fast];
            slow++;
            count++;
        }
        slow = 0;
        cout<<endl<<endl;
        while(arr[slow] != arr[fast]){
            cout<<"slow: "<<slow<<" fast: "<<fast<<endl;
            slow++;
            fast++;
        }
        return arr[slow];
    }

int main(){
    vector<int> nums = {1, 3, 2, 4, 6, 5, 7, 3};
    cout<<findDuplicate(nums)<<endl;
}