#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// LUOGU_RID: 187756358
#include<bits/stdc++.h>

using namespace std;

const int N=1e5+50;

long long n,m;

map<pair<long long,long long>,long long> tu;

int dx[10]={0,2,1,-1,-2,-2,-1, 1, 2};

int dy[10]={0,1,2, 2, 1,-1,-2,-2,-1};

int main()

{

    ios::sync_with_stdio(false);

    cin.tie(0),cout.tie(0);

    cin>>n>>m;

    for(int i=1;i<=m;i++)

    {

        long long a,b;

        cin>>a>>b;

        for(int j=0;j<=8;j++)

        {

            long long x=a+dx[j],y=b+dy[j];

            if(x>=1&&y>=1&&x<=n&&y<=n)

            {

                tu[make_pair(x,y)]=1;

                //cerr<<x<<" "<<y<<endl;

            }

        }

        //cerr<<endl;

    }

    long long cnt=tu.size();

    //cerr<<cnt<<endl;

    cout<<n*n-cnt;

	return 0;

}