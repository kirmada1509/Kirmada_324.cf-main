#include<bits/stdc++.h>

// static int counter = 0;
// void merge(vector<int>& arr, int l, int mid, int r){
//     vector<int> left, right;
//     for(int i = l; i <= mid; i++){
//         left.push_back(arr[i]);
//     }
//     for(int i = mid + 1; i <= r; i++){
//         right.push_back(arr[i]);
//     }
//     int i = 0, j = 0, k = l;
//     while(i < mid - l + 1 && j < r - mid){
//         if(left[i] <= right[j]){
//             arr[k] = left[i];
//             i++; k++;
//         }
//         else{
//             // cout<<left[i]<<" "<<right[j]<<endl;
//             arr[k] = right[j];
//             int c = i;
//             for(int c = i; c < left.size(); c++){
//                 if(left[c] > 2 * right[j]) {
//                     counter++;
//                 }
//             }
//             // counter += mid - c + 1;
//             j++; k++;
//         }
//     }
//     while(i < mid - l + 1){
//         arr[k] = left[i];
//         i++; k++;
//     }
//     while(j < r - mid){
//         arr[k] = right[j];
//         j++; k++;
//     }
// }

// void mergeSort(vector<int>& arr, int l, int r){
//     if(r > l){
//         int m = l + (r-l)/2;
//         mergeSort(arr, l, m);
//         mergeSort(arr, m + 1, r);
//         merge(arr, l , m, r);
//     }
// }

// int reversePairs(vector<int>& nums) {
//     static int counter;
//     mergeSort(nums, 0, nums.size() - 1);
//     return counter;
// }
static int counter = 0;
    void merge(vector<int>& arr, int l, int mid, int r){
        long long int m = mid+1;
        for(int i=l; i<=mid; i++){
            while(m<=r && arr[i] > 2*(long long)arr[m]){
                m++;
            }
            counter +=m-(mid+1);
        }
        vector<int> left, right;
        for(long long int i = l; i <= mid; i++){
            left.push_back(arr[i]);
        }
        for(long long int i = mid + 1; i <= r; i++){
            right.push_back(arr[i]);
        }
        long long int i = 0, j = 0, k = l;
        while(i < mid - l + 1 && j < r - mid){
            if(left[i] < right[j]){
                arr[k] = left[i];
                i++; k++;
            }
            else{
                arr[k] = right[j];
                j++; k++;
            }
        }
        while(i < mid - l + 1){
            arr[k] = left[i];
            i++; k++;
        }
        while(j < r - mid){
            arr[k] = right[j];
            j++; k++;
        }
    }

    void mergeSort(vector<int>& arr, long long int l, long long int r){
        if(r > l){
            long long int m = l + (r-l)/2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);
            merge(arr, l , m, r);
        }
    }

    long long int reversePairs(vector<int>& nums) {
        mergeSort(nums, 0, nums.size() - 1);
        long long int ans = counter;
        counter = 0;
        return ans;
    }

int main(){
    vector<int> arr = {1,3,2,3,1};
    // vector<int> arr = {-5, -5};
    cout<<reversePairs(arr)<<endl;
}
