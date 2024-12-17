#include <bits/stdc++.h>
#define fto(i,a,b) for(int i=a; i<=b; ++i)

using namespace std;

int n, L;
int a[12], b[12];
vector<string> all;
vector<string> rs;
// int z[12][4098];

int getbit(int i, int j)
{
    return ((i >> j) & 1);
}

int kc(int i,int j)
{
    return abs(a[i] - a[j]) + abs(b[i] - b[j]);
}

void get(int start, int current, int status, int total, string way)
{
    if (status == (1 << n) - 1 && total + kc(current, start) <= L) 
    {
        all.push_back(way);
    }
    fto(i,0,n-1) if (!getbit(status, i))
    {
        if (total + kc(current, i) > L) continue;
        get(start, i, status + (1<<i), total + kc(current, i), way + std::to_string(i));
    }
}

bool areRotations(const std::string& i, const std::string& j) {

    string concatenated = i + i;

    return concatenated.find(j) != std::string::npos;
}

int main()
{
    cin >> n;
    
    fto(i,0,n-1) cin >> a[i] >> b[i];
    cin >> L;
    
    
    fto(i,0,n-1)
    {
        get(i, i, 1 << i, 0, std::to_string(i));
    }
    
    for(auto &i: all)
    {
        int qq = 1;
        for (auto &j: rs)
        {
            if (areRotations(i, j)) {qq = 0; break;}
        }
        if (qq) rs.push_back(i);
    }
    cout << rs.size();
    return 0;
}