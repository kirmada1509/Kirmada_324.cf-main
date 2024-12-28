#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> cells;
    int N, Q;
    cin>>N>>Q;
    for(int i = 1; i <= N; i++){
        cells.push_back(i);
    }
    int last_color = N;
    int last_index = N;
    while (Q--)
    {
        int q; cin>>q;
        if(q == 2){
            int c; cin>>c;
            int count = 0;
            for(int i = 0; i < N; i++){
                int x = cells[i];
                if(x == c){
                    count++;
                    if((last_color == c && i >= last_index)){
                        count += N - i - 1;
                        break;
                    }
                }

            }
            cout<<count<<endl;
        }

        if(q == 1){
            int x, c;
            cin>>x>>c;

            cells[x-1] = c;
            last_color = c;
            last_index = min(last_index, x-1);
        }
    }
    return 0;
}