#include<bits/stdc++.h>

void cycle(vector<int>& arr){
	unordered_set<int> set;
	cout<<set.count(12);
	for(int cs = 0; cs < arr.size(); cs++){
		int item = arr[cs];
		int pos = cs;
		for(int i = cs + 1; i < arr.size()-1; i++){
			if(arr[i] < item) pos++;
		}
		swap(item, arr[pos]);
		while(pos != cs){
			pos = cs;
			for(int i = pos + 1; i < arr.size(); i++){
				if(arr[i] < item) pos++;
			}
			swap(item, arr[pos]);
		}
	}
}

int main(){
	vector<int> arr = {5, 4, 3, 2, 1};
	// vector<int> arr = {20, 40, 50, 10, 30};
	cycle(arr);
	for(int x: arr) cout<<x<<" ";
	cout<<endl;
}