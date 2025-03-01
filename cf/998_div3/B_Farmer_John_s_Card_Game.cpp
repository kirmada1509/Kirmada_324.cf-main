#include<iostream>
#include<bits/stdc++.h>
using namespace std;

#define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
#define sort_ass(A) sort(A.begin(), A.end())
#define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
#define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

void solve(){
    //n -> cows, m -> cards
    int n, m; cin >> n >> m;
    vector<pair<int, vector<int>>> cards;
    for(int i = 0; i < n; i++){
        vector<int> temp;
        get(temp, m);
        sort(temp.begin(), temp.end());
        cards.push_back(make_pair(i+1, temp));
        temp.clear();
    } 

    sort(cards.begin(), cards.end(), [](pair<int, vector<int>> A, pair<int, vector<int>> B){
        return A.second[0] < B.second[0];
    });

    int check = -1;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            // cout<<cards[j].second[i]<<"->";
            if(cards[j].second[i] > check){
                check = cards[j].second[i];
            }
            else{
                cout<<-1<<endl;
                return;
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout<<cards[i].first<<" ";
    }
    cout<<endl;
    return;
}

int main(){
    int t; cin >> t;
    while(t--)
    solve();
}