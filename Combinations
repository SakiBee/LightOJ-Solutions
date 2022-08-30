#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define ll long long
#define int long long
const int N = 1000001;
const int mod = 1000003;

int power(int x, int n, int mod) {
  int ans = 1 % mod; x %= mod; 
  if(x < 0) x += mod;
  while(n) {
    if(n & 1) ans = 1LL * ans * x % mod;
    x = 1LL * x * x % mod;
    n >>= 1;
  }
  return ans;
}
int f[N], invf[N];

void precal() {
  f[0] = 1;
  for (int i = 1; i < N; i++) f[i] = 1LL * f[i-1] * i % mod;
  invf[N-1] = power(f[N-1], mod - 2, mod);
  for (int i = N-2; i >= 0; i--) invf[i] = 1LL * invf[i+1] * (i + 1) % mod;
}

int nCr(int n, int r) {
  if (n < r || n < 0) return 0;
  return 1LL * f[n] * invf[r] % mod * invf[n-r] % mod;
}
int nPr(int n, int r) {
  if (n < r || n < 0) return 0;
  return 1LL * f[n] * invf[n-r] % mod;
}
void solve () {
  int n, r; cin >> n >> r;
  cout << (nCr(n, r) % mod) << endl;
}

int32_t main () {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  ll tc, t = 0; 
  precal();
  cin >> tc; while(tc --) {
    cout << "Case " << ++t << ": ";
               solve();
             }
}


