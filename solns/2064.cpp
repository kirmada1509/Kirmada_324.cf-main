#include<bits/stdc++.h>

bool isFeasible(vector<int> quantities, int mid, int stores){
    int allocated = 0;
    for(int i = 0; i < quantities.size(); i++){
        cout<<"i: "<<i<<" quantities[i]: "<<quantities[i]<<" mid: "<<mid<<" allocated: "<<allocated<<endl;
        while(quantities[i] > 0){
            allocated++;
            if(allocated > stores){
                cout<<"false"<<endl<<endl;
                return false;
            }
            quantities[i] -= mid;
            cout<<"i: "<<i<<" quantities[i]: "<<quantities[i]<<" mid: "<<mid<<" allocated: "<<allocated<<endl;
        }
    }
    cout<<endl;
    return(allocated <= stores);
}

int minimizedMaximum(int stores, vector<int> quantities) {
    int l = 0;
    int r = *max_element(quantities.begin(), quantities.end());
    // int r = *min_element(quantities.begin(), quantities.end());
    int mid;
    int ans;
    while (l <= r)
    {
        mid = (l + r)/2;
        cout<<l<<" "<<r<<" "<<mid<<endl; 
        if(isFeasible(quantities, mid, stores)){
            r = mid - 1;
            ans = mid;
        }else{
            l = mid + 1;
        }
    }
    return ans;
}


int main(){
    vector<int> quantities = {15, 10, 10};
    int stores = 7;
    cout<<minimizedMaximum(stores, quantities)<<endl;
}