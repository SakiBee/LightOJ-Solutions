https://lightoj.com/problem/goldbach-s-conjecture


#include<bits/stdc++.h>
#define     ll                      long long
#define     pb                      push_back

using namespace std;

const int N = 10000005;

vector <ll> primes;
bool prime[N];
void sieve()
{
    memset(prime,1,sizeof(prime));
    primes.pb(2);
    for(ll i = 4; i<=N; i+=2)
        prime[i] = 0;
    for(ll i = 3; i<=N; i+=2)
    {
        if(prime[i])
        {
            primes.pb(i);
            for(ll j = i*i; j<=N; j+=i*2LL)
            {
                prime[j] = 0;
            }
        }
    }
}

int main(){
    sieve();
    ll tt, t=0; cin>>tt;
    while(tt--)
    {
        ll n, cnt=0;
        cin>> n;
        //ll pos = primes.size();
        for(ll i=0; primes[i] <= n/2; i++)
        {
            if(prime[n-primes[i]])
            {
                cnt++;
            }
        }
        cout<<"Case " << ++t << ": " <<cnt<<endl;
    }
    return 0;
}


