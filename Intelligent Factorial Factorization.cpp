//https://lightoj.com/problem/intel-factor-factorization

#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a/__gcd(a,b))*b

#define  ll  long long
#define  int ll


const ll N = 100 + 9;
vector <ll> primes;
bool prime[N];
void sieve(){
    prime[1] = true;
    for(ll i = 2; i*i <= N-9; i++) if(!prime[i]){
        for(ll j = i*i; j <= N-9; j+=i) prime[j] = true;}
    for(ll i=2; i<=N-9; i++){if(!prime[i]) primes.push_back(i);}
}

map<int, vector<int> > mp; 
void precal() {
  vector<int> v(101, 0);
  mp[1] = v;
  for (int i = 2; i <= 100; i++) {
    mp[i] = mp[i-1];
    int n = i;
    for (int j = 0; primes[j] * primes[j] <= n; j++) {
      if(n % primes[j] == 0) {
        while(n % primes[j] == 0) {
          mp[i][primes[j]]++;
          n /= primes[j];
        }
      }
    }
    if(n > 1) mp[i][n]++;
  }
}

void solve () {
  int n; cin >> n;
  cout << n << " =";
  bool ok = 0;
  for (int i = 1; i < 100; i++) {
    int p = mp[n][i];
    if(p) {
      if(ok) cout << " *";
      cout << " " << i << " (" << p << ")";
      ok = 1;
    }
  }
  cout << endl;

}

int32_t main () {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  sieve();
  precal();
  ll tc, t = 0; 
  cin >> tc; 
  while(tc --) {
    cout << "Case " << ++t << ": ";
    solve();
  }
}

