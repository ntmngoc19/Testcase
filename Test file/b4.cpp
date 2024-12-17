#include<bits/stdc++.h>
using namespace std;
const long o=1e3+3;
long m,n,a[o][o],f[o][o];
int main()
{
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin>>m>>n;
    for(long i=0;i<m;i++)
    for(long j=0;j<n;j++)
        cin>>a[i][j];
    long kq=0;
    for(long j=0;j<n;j++)
    for(long i=0;i<m;i++)
    {
        f[i][j]=a[i][j]+max(f[i][j-1],max(f[(i+1)%m][j-1],f[(i-1+m)%m][j-1]));
        if(j==n-1)kq=max(kq,f[i][j]);
    }
    cout<<kq;
    return 0;
}
