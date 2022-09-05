https://lightoj.com/problem/trailing-zeroes-ii


#include <bits/stdc++.h>
//#include<dbg.h>
using namespace std;
#define  ll  long long
#define  int ll

int bee(int n, int a) {
  int ret = 0LL;
  while(n) {
    ret += n/a;
    n/=a;
  }
  return ret;
}

int bee2(int n, int a) {
  int ret = 0LL;
  while(n % a == 0) {
    n /= a;
    ret++;
  }
  return ret;
}

void solve () {
  int n, r, p, q;
  cin >> n >> r >> p >> q;

  int x = bee(n, 5) + bee2(p, 5) * q - bee(r, 5) - bee((n-r), 5);
  int y = bee(n, 2) + bee2(p, 2) * q - bee(r, 2) - bee((n-r), 2);
  cout << min(x, y) << endl;
}

int32_t main () {
  ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
  ll tc, t = 0; 
  cin >> tc; while(tc --){
    cout << "Case " << ++t << ": ";
               solve();
             }
}

