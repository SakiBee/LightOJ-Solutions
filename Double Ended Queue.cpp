https://lightoj.com/problem/double-ended-queue


#include <bits/stdc++.h>
using namespace std;
#define  fio  ios_base::sync_with_stdio(false);
#define  ll long long
#define     for0(i,n)       for(int (i)=0; (i) < (n); (i)++)
#define  endl    '\n'


void SakiBee()
{
   ll n,p,a;
   cin >> n >> p;
   std::vector<ll> v;
   ll x = 0;
   string s;
   for0(i,p)
   {
     cin >> s;
     if(s == "pushLeft")
     {
        cin >> a;
        if(v.size() >= n) cout << "The queue is full" << endl;
        else{
            cout << "Pushed in left: " << a << endl;
            v.insert(v.begin(),a);
        } 
     }
     else if(s == "pushRight")
     {
        cin >> a;
        if(v.size() >= n) cout << "The queue is full" << endl;
        else{
            cout << "Pushed in right: " << a << endl;
            v.push_back(a);
        } 
     }
     else if(s == "popLeft")
     {
        if(v.size() > 0)
        {
            cout << "Popped from left: " << *v.begin() << endl;
            v.erase(v.begin());
        }
        else cout << "The queue is empty" << endl;
     }
     else if(s=="popRight"){
        if(v.size() > 0)
        {
            cout << "Popped from right: " << *(v.end()-1) << endl;
            v.erase(v.end()-1);
        }
        else cout << "The queue is empty" << endl;
     }
   }
}

int main(){
    // fio; 
     int tt,t=0; 
     cin >> tt;
     while(tt--){
          cout << "Case " << ++t << ":\n";
          SakiBee();
         }
          return 0;
     }
//Wrong doesn't mean bad
