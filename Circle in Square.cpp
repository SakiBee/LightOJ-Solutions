https://lightoj.com/problem/circle-in-square

/**                 <------------------------------------------------>
                    |          ___                                   |
                    |         ^   ^                                  |
                    |        / _/\ \   *___*     Allah is Almighty   |
                    |        \/*.*\/   / *       Md. Sakib Uddin.    |
                    |        (  _  )  / /        RMSTU               |
                    |        _>---<__/ /         hi.sakib75@gmail.com|
                    |      /  sakib   /                              |
                    |     / \/      /                                |
                    |     \ :      :                                 |
                    |      \:______:                                 |
                    |       :  L   :                                 |
                    |       :__ :__:                                 |
                    |        : :: :                                  |
                    |        :_::_:                                  |
                    |       _:_::_:_                                 |
                    |      <___::___>                                |
                    <------------------------------------------------>**/
#include <bits/stdc++.h>
using namespace std;
#define     boost           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define     ll              long long
#define     gcd(a,b)        __gcd(a,b)
#define     lcm(a,b)        (a/__gcd(a,b))*b
#define     vll             vector<ll>
#define     v_pr            vector<pair<ll,ll>>
#define     pr              pair<ll,ll>
#define     all(x)          x.begin(),x.end()
#define     reall(x)        x.rbegin(),x.rend()
#define     eb              emplace_back
#define     pb              push_back
#define     F               first
#define     S               second
#define     fori(i,b,e)     for(ll (i)=(b); (i) <= (e); (i)++)
#define     for0(i,n)       for(ll (i)=0; (i) < (n); (i)++)
#define     forrv(i,b,e)    for(ll i=b;i>=e;i--)
#define     sp(a)           fixed<<setprecision(a)
#define     endl            '\n'
#define     yes             cout << "YES" << '\n'
#define     no              cout << "NO" << '\n'

/**_____________________________________DEBUG____________________________________________________**/

template<typename T>void showSTL(T H);template<typename T,typename V>void showSTL(pair<T,V> H);
template<typename T>void showSTL(priority_queue<T> H);template<typename T>void showSTL(stack<T> H);
template<typename T,typename V>void showSTL(map<T,V> H);
template<typename T,typename V>void showSTL(multimap<T,V> H);template<typename T>void showSTL(vector<T> H);
template<typename T>void showSTL(set<T> H);template<typename T>void showSTL(multiset<T> H);
template<typename T>void showSTL(list<T> H);void showSTL(char *H);
template<typename T>void showSTL(deque<T> H);template<typename T>void showSTL(queue<T> H);
template<typename T>void showSTL(T H){stringstream ss;ss<<H;cerr<<ss.str();}
template<typename T,typename V>void showSTL(pair<T,V> H){cerr<<"(";showSTL(H.first);cerr<<"=>";showSTL(H.second);cerr<<")";}
template<typename T>void showSTL(priority_queue<T> H){cerr<<endl;while(!H.empty()){cerr<<H.top()<<endl;H.pop();}cerr<<endl;}
template<typename T>void showSTL(stack<T> H){cerr<<endl;while(!H.empty()){cerr<<H.top()<<endl;H.pop();}}
template<typename T,typename V>void showSTL(map<T,V> H){cerr<<"[ ";for(auto val:H){showSTL(val);cerr<<" ";}cerr<<"]";}
template<typename T,typename V>void showSTL(multimap<T,V> H){cerr<<"[ ";for(auto val:H){showSTL(val);cerr<<" ";}cerr<<"]";}
template<typename T>void showSTL(vector<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(set<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(multiset<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(list<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
void showSTL(char *H){for(int i=0;i<strlen(H);i++){showSTL(H[i]);};}
template<typename T>void showSTL(deque<T> H){cerr<<"[ ";for(auto val : H){showSTL(val);cerr<<' ';}cerr<<"]";}
template<typename T>void showSTL(queue<T> H){cerr<<"[ ";while(!H.empty()){showSTL(H.front());cerr<<' ';H.pop();}cerr<<"]";}
vector<string>vec_spltr(string s){s+=',';vector<string>res;while(!s.empty())
res.push_back(s.substr(0, s.find(','))),s=s.substr(s.find(',')+1);return res;}
void dbg_out(vector<string>__attribute__((unused))args,__attribute__((unused))int idx,__attribute__((unused))int LINE_NUM)
{cerr<<endl;}template<typename Head,typename... Tail>
void dbg_out ( vector <string> args, int idx, int LINE_NUM, Head H, Tail... T)
{if(idx>0)cerr<<", ";else cerr << "Line(" << LINE_NUM << "):";
cerr<<" "<<args[idx]<<" = ";showSTL(H);dbg_out(args,idx+1,LINE_NUM, T...);}
#define debug(...) dbg_out(vec_spltr(#__VA_ARGS__), 0, __LINE__, __VA_ARGS__)

vll divisors(ll n)
{
    vll v;
    for(ll i=1; i*i <= n; i++){
        if(n%i == 0){
            v.pb(i);
            if(n/i != i) v.pb(n/i);
        }
    }
    return v;
}


void SakiBee(){
    double n; cin >> n;
    double a = 4*n*n;
    double c = 2 * acos (0.0) * (n) * (n);
    double ans = a-c;
    cout << sp(2) << ans << endl;

}


int main(){
    ll tc,t=0; 
    cin >> tc; while(tc--){
                cout << "Case " << ++t << ": ";
               SakiBee();}
               return 0;
}
//245423556 has  81 divisors
