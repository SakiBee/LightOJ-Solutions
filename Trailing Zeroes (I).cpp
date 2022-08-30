https://lightoj.com/problem/trailing-zeroes-i

//** In the name of Allah, most Gracious, most Compassionate **//
#include <bits/stdc++.h>
using namespace std;
#define     run           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define     ll              long long
#define     ull             unsigned long long
#define     bll             __int128

#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a/__gcd(a,b))*b
#define     vll             vector<ll>
#define     pr              pair<ll,ll>
#define     v_pr            vector<pair<ll,ll>>
#define     v_ppr            vector<pair<pair<ll,ll>,ll>>
#define     all(x)          x.begin(),x.end()
#define     reall(x)        x.rbegin(),x.rend()
#define     eb              emplace_back
#define     pb              push_back
#define     F               first
#define     S               second
#define     fori(i,b,e)     for(ll (i)=(b); (i) <= (e); (i)++)
#define     for0(i,n)       for(ll (i)=0; (i) < (n); (i)++)
#define     forrv(i,b,e)    for(int i=b;i>=e;i--)
#define     sp(a)           fixed<<setprecision(a)
#define     endl            '\n'
#define     yes             cout << "Yes" << '\n'
#define     no              cout << "No" << '\n'


const ll M = 1e6+7;
const ll N = 1e6 + 9;
vector <ll> primes;
bool prime[N];
void sieve(){
    prime[1] = true;
    for(ll i = 2; i*i <= N-9; i++) if(!prime[i]){
        for(ll j = i*i; j <= N-9; j+=i) prime[j] = true;
    }
    for(ll i=2; i<=N-9; i++){if(!prime[i]) primes.pb(i);}
}
int main(){
    run;
    sieve();
    ll tc,t=0; cin >> tc;
    while(tc--){
        ll n; cin >> n;
        ll ans = 1;
        for(ll i=0; i<primes.size() and primes[i]*primes[i] <= n; i++){
            if(n%primes[i] == 0){
                ll tm = 0;
                while(n%primes[i] == 0){
                    tm++;
                    n/=primes[i];
                }
                ans *= (tm+1);
            }
        }
        if(n>1) ans*=2;
        ans--;
        cout << "Case " << ++t << ": " << ans << endl;
    }
    return 0;
}
