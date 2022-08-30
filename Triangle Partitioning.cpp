https://lightoj.com/problem/triangle-partitioning

#include <bits/stdc++.h>
using namespace std;
#define     ll              long long
#define     vll             vector<ll>
#define     all(x)          x.begin(),x.end()
#define     yes             cout << "Yes" << '\n'
#define     no              cout << "No" << '\n'

void solve()
{
    double a,b,d,r;
    cin >> a >> b >> d >> r;
    double ans = sqrt(r/(r+1.0))*a;
    cout << fixed << setprecision(10) << ans << endl;

}
int main()
{
   int tt, t=0; cin >> tt;
   while(tt--)
   {
      cout << "Case " << ++t << ": ";
      solve();
   }
}
