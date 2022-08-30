https://lightoj.com/problem/rooks



#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define  ll  long long
#define  int ll

void solve () {
  int n, k;
  cin >> n >> k;
  if(k > n) cout << 0 << endl;
  else {
    long double ans = 1.0;
    for (int i = 0; i < k; i++) {
      ans *= 1.0 * ((n-i) * (n-i));
    }
    for (int i = 2; i <= k; i++) {
      ans /= (i * 1.0);
    }
    cout << fixed << setprecision(0) << ans << endl;
  }
}

int32_t main () {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  ll tc, t = 0; 
  cin >> tc; while(tc --){
    cout << "Case " << ++t << ": ";
    solve();
  }
             
}



