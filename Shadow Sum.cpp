https://lightoj.com/problem/shadow-sum

#include <bits/stdc++.h>
using namespace std;
#define  fio  ios_base::sync_with_stdio(false);
#define  ll long long
#define     for0(i,n)       for(int (i)=0; (i) < (n); (i)++)
#define  endl    '\n'
void SakiBee()
{
    ll n; cin >> n;
    set<int>st;
    map<int, int>mp;
    int sum = 0,a;
    std::vector<long long> v(n);
    for0(i,n){
        cin >> a;
        mp[abs(a)]=a;
    }
    for(auto it:mp) sum += it.second; 

    cout << sum << endl;
}

int main(){
     fio; 
     int tt,t=0; 
     cin >> tt;
     while(tt--){
          cout << "Case " << ++t << ": ";
          SakiBee();
         }
          return 0;
     }
//Wrong doesn't mean bad


