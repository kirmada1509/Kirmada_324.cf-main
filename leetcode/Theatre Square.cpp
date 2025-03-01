#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n,m,a;
    cin>>n>>m>>a;
    long long int m_counter = 0;
    long long int n_counter = 0;
    m_counter = m_counter + (m / a) + ( m % a == 0 ? 0 : 1);
    n_counter = n_counter + (n / a) + ( n % a == 0 ? 0 : 1);
    cout<<m_counter*n_counter<<endl;
}
