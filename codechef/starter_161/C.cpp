// #include<iostream>
// #include<bits/stdc++.h>
// using namespace std;

// #define get(A, N) for(int i = 0; i < N; i++){int temporary_for_input; cin>>temporary_for_input; A.push_back(temporary_for_input);}
// #define sort_ass(A) sort(A.begin(), A.end())
// #define sort_des(A) sort(A.begin(), A.end(), [](int a, int b){return a > b;})
// #define print(A) {for(int x: A)cout<<x<<" ";}cout<<endl;

// void solve(){
//     int T;cin>>T;
//     while(T--){
//         int N; cin>>N;
//         vector<int> A, B; get(A, N); get(B, N);
//         int max_A = *max_element(A.begin(), A.end());
//         int max_B = *max_element(B.begin(), B.end());
//         int max_AB = max(max_A, max_B);
//         int count = 0;
//         bool flag = true;
//         for(int i = 0; i < N; i++){
//             if(A[i] == max_AB && A[i] == B[i]){
//                 flag = false;
//                 break;
//             }
//             if(A[i] == max_AB)count++;
//             if(B[i] == max_AB)count++;
//             if(count > 1){
//                 flag = false;
//                 break;
//             }
//         }
//         flag ? cout<<"Yes"<<endl : cout<<"No"<<endl;
//     }
// }

// int main(){
//     solve();
// }


#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define get(A, N) for(int i = 0; i < N; i++) { int temp; cin >> temp; A.push_back(temp); }

void solve() {
    int T; 
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A, B;
        get(A, N);
        get(B, N);

        int maxA = -1, secondMaxA = -1;
        int maxIdx = -1;
        for (int i = 0; i < N; i++) {
            if (A[i] > maxA) {
                secondMaxA = maxA;
                maxA = A[i];
                maxIdx = i;
            } else if (A[i] > secondMaxA) {
                secondMaxA = A[i];
            }
        }
        bool canWin = false;
        for (int i = 0; i < N; i++) {
            int aliceMax = max(A[i], B[i]);
            int bobMax = (i == maxIdx) ? secondMaxA : maxA;

            if (aliceMax > max(bobMax, B[maxIdx])) {
                canWin = true;
                break;
            }
        }

        cout << (canWin ? "Yes" : "No") << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    solve();
    return 0;
}
