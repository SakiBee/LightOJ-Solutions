https://lightoj.com/problem/answering-queries

#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define  ll  long long
#define  int ll

void solve () {
  int n, q; cin >> n >> q;
  vector<int>v(n), pre(n+1, 0);
  for (int i = 0; i < n; i++) {
    cin >> v[i];
  }
  for (int i = 0; i < n; i++) {
    pre[i+1] = pre[i] + v[i];
  }
  ll tot = 0LL;
  for (int i = 1; i < n; i++) {
    tot += (v[i-1] * (n-i)) - (pre[n] - pre[i]);
  }

  int a, b, x;
  while(q--) {
    cin >> a;
    if(a == 1) {
      cout << tot << endl;
    }
    else {
      cin >> b >> x;
      int tm = v[b];
      int dif = x - tm;
      tot -= b * dif;
      tot += (n - b - 1) * dif;

      v[b] = x;
    }
  }
}

int32_t main () {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  ll tc, t = 0; 
  cin >> tc; while(tc --){
    cout << "Case " << ++t << ":\n";
    solve();
}
}

