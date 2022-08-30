https://lightoj.com/problem/how-many-points


#include<bits/stdc++.h>
#define     fast                    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define     ll                      long long
#define     pb                      push_back
#define     M                       1000000007
using namespace std;

ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b,a%b); }

int main()
{
    ll tt, t=0;
    cin>>tt;
    while(tt--)
    {
        ll x1,x2,y1,y2;
        cin>>x1>>x2>>y1>>y2;
        ll x = abs(x1-y1);
        ll y = abs(x2-y2);
        ll lattice = gcd(x, y);

        printf("Case %lld: %lld\n",++t,lattice+1);
    }
}


