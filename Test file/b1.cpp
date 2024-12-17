#include <bits/stdc++.h>
#define fto(i,a,b) for(int i=a; i<=b; ++i)

using namespace std;

int n, D;
// int a[1005];

int main()
{
    cin >> n >> D;
    int x;
    int rs = 0;
    fto(i,1,n) 
    {
        cin >> x;
        if (x>=D) ++ rs;
    }
    cout << rs;
    return 0;
}