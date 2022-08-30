https://lightoj.com/problem/nth-permutation


#include <bits/stdc++.h>
using namespace std;
#define  ll  long long
#define  int ll

ll fact[22];

void fact_cal() {
  fact[0] = 1;
  for (int i = 1; i < 21; i++) {
    fact[i] = fact[i-1] * i;
  }
}

ll tot_permu(map<char, int> & mp) {
  int tot = 0, tm = 1;
  for (auto &[c, fre] : mp) {
    tot += fre;
    tm *= fact[fre];
  }
  return fact[tot]/tm;
}

void solve () {
  string s, ans = "";
  int n; cin >> s >> n;
  map<char, int> mp;
  for (auto x : s) mp[x]++;

  if(tot_permu(mp) < n) {
    cout << "Impossible\n";
    return;
  }

  ll pre = 0;
  for (int i = 0; i < s.size(); i++) {
    for (auto &[c, fre] : mp) {
      if(fre == 0) continue;

      fre--;
      int cur = tot_permu(mp);
      if(pre + cur >= n) {
        ans += c;
        break;
      }
      else {
        fre++;
        pre += cur;
      }
    }
  }
  cout << ans << endl;
}

int32_t main () {
  ios_base::sync_with_stdio(false); cin.tie(NULL);
  ll tc, t = 0; 
  fact_cal();
  cin >> tc; while(tc --) {
    cout << "Case " << ++t << ": ";
    solve();
  }
}
             

