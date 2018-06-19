#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,j,n,m,a[100000],b[100000],x,y,flag=0;
    cin>>n>>m;
    cin>>x>>y;
    for(i=0; i<n; i++)
        cin>>a[i];
    for(i=0; i<m; i++)
        cin>>b[i];
    sort(b,b+m,greater<int>());
    if(a[x-1]<b[y-1])
        cout<<"YES";
    else
        cout<<"NO";

}
