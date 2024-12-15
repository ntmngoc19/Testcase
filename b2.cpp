#include <bits/stdc++.h>
#define fto(i,a,b) for(int i=a; i<=b; ++i)

using namespace std;

int n, D, K;
int a[1005];

int main()
{
    cin >> n >> K >> D;
    int x;
    int rs = 0;
    fto(i,1,n) 
    {
        cin >> x;
        a[i] = a[i-1] + x;
    }
    fto(i,K,n) if (a[i] - a[i-K] >= D)
    {
        rs ++;
    }
    cout << rs;
    return 0;
}