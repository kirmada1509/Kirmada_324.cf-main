#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    if(n >= 0){
        cout<<n<<endl;
        return 0;
    }
    int one, two;
    one = n / 10;
    two = ((n/100)*10)+(n%10);
    cout<<(one > two ? one : two)<<endl;
    return 0;
}