#include <bits/stdc++.h>
using namespace std;
int counter = 0;
void toh(int n, string a,string b,string c){
    if(n == 0){
        counter++;
        return;
    }
    toh(n-1, a, c, b);
    cout<<"moved "<<n<<"from "+a+" to "+c<<endl;
    toh(n-1, b, a, c);
}

int main(){
    toh(1, "A", "B", "C");
    cout<<counter-1<<endl;
    return 0;
}