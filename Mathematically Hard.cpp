//https://lightoj.com/problem/mathematically-hard

#include <bits/stdc++.h>
#define ll unsigned long long int
using namespace std;
const int N = 5000009;
ll phi[N];
void sieve()
{
    for(ll i= 2; i<=N; i++)
    {
        if(phi[i] == 0)
        {phi[i] = i-1;
        for(ll j = 2*i; j<=N; j+=i)
        {
            if(phi[j] == 0)
            {
                phi[j] = j;
            }
            phi[j] = phi[j] - (phi[j]/i);
        }
        }
    }
    for(ll i = 2; i<=N; i++)
    {
        phi[i] = phi[i]*phi[i];
        phi[i] = phi[i] + phi[i-1];
    }
}


int main()
{
    sieve();
    ll tt, t =0; cin>>tt;
    while(tt--)
    {
        ll x,y;
        cin>>x>>y;

        ll ans = phi[y] - phi[x-1];
        printf("Case %llu: %llu\n",++t,ans);
    }
    return 0;
}
