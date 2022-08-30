https://lightoj.com/problem/calm-down

/** Author: Md. Sakib Uddin.
    From: RMSTU             **/
#include <bits/stdc++.h>
using namespace std;
#define     boost           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
#define     ll              long long
#define     ull             unsigned long long
#define     ld              long double
#define     sl(x)           scanf("%lld", &x)
#define     sll(x, y)       scanf("%lld %lld", &x, &y)
#define     slll(x, y, z)   scanf("%lld %lld %lld", &x, &y, &z)
#define     printl(x)       printf("%lld\n")
#define     printll(x,y)    printf("%lld %lld\n")
#define     printlll(x,y,z) printf("%lld %lld %lld\n")
#define     min3(a,b,c)     min(a,min(b,c))
#define     min4(a,b,c,d)   min(d,min3(a,b,c))
#define     max3(a,b,c)     max(a,max(b,c))
#define     max4(a,b,c,d)   max(d,max3(a,b,c))
#define     lcm(a,b)        (a*b)/gcd(a,b)
#define     gcd(a,b)        __gcd(a,b)
#define     vi              vector<int>
#define     vll             vector<ll>
#define     vc              vector<char>
#define     vs              vector<string>
#define     all(x)          x.begin(),x.end()
#define     reall(x)        x.rbegin(),x.rend()
#define     eb              emplace_back
#define     pb              push_back
#define     popb            pop_back
#define     pf              push_front
#define     popf            pop_front
#define     mk              make_pair
#define     F               first
#define     S               second
#define     fori(i,b,e)     for(int (i)=(b); (i) <= (e); (i)++)
#define     for0(i,n)       for(int (i)=0; (i) < (n); (i)++)
#define     forrv(i,b,e)    for(int i=b;i>=e;i--)
#define     sp(a)           fixed<<setprecision(a)
#define     endl            '\n'
#define     yes             cout << "yes" << '\n'
#define     no              cout << "no" << '\n'
#define     CASE(t)            printf("Case %lld: ",++t)
#define     coutl(x)        cout << x << '\n'
#define     cout(x)         cout << x
#define     nl              cout << '\n'
#define     pi              2*acos(0.0)
#define     inf             0x3f3f3f3f
#define     E               2.71828182845904523536
#define     gamma           0.5772156649

/**_____________________________________     ____________________________________________________
   _____________________________________DEBUG____________________________________________________**/

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

/**_________________________________________                ____________________________________________
   _________________________________________CUSTOM FUNCTIONS____________________________________________**/

const int N = 10000005; vector <ll> primes; bool prime[N];
void sieve(){memset(prime,1,sizeof(prime)); primes.pb(2); for(ll i = 4; i<=N; i+=2) prime[i] = 0;
     for(ll i = 3; i<=N; i+=2) if(prime[i]){primes.pb(i); for(ll j = i*i; j<=N; j+=i*2LL) prime[j] = 0;}}

bool NormalPrime(ll n){if(n <= 1)return false;for (ll i = 2; i*i<=n; i++)if (n % i == 0)return false;return true;}

bool compare(pair<int,int>a, pair<int,int>b) {if(a.F != b.F) return a.F<b.F; else return(a.S>b.S);}
ll modpow(ll p, ll q, ll mod){ll ans=1;while(q>0){if(q&1) ans=ans*p%mod;p=p*p%mod;q>>=1;}return ans;}
ll R_M(ll a,ll b,ll m){if(b==1) return a%m;if(b&1) return (R_M(a,b-1,m)*a)%m;else return (R_M(a,b/2,m)*R_M(a,b/2,m))%m;}

ll modInverse(ll x, ll m){return modpow(x, m-2, m);}

vll fac_help(ll x){vll facts;for(ll i=1;i*i<=x;i++){if(x%i==0){facts.pb(i);if(x/i!=i)facts.pb(x/i);}};return facts;}
vll factors(ll x){vll facts=fac_help(x);sort(all(facts));return facts;}

void decToBinary(ll n){int binaryNum[32], i = 0, cnt = 0;while (n > 0) {binaryNum[i] = n % 2;n = n / 2;i++;}}

/**_________________________________________             _______________________________________________
   _________________________________________MAIN FUNCTION_______________________________________________**/

int main()
{
    ll tt,t=0; cin >> tt;
    while(tt--)
    {
        ll n,b,c;
        double a;
        cin >> a >> n;
        double deg = pi/n;
        double r = (a*sin(deg))/(1+sin(deg));



        CASE(t); cout << sp(10) << r << endl;

    }
    return 0;
}

//Email: hi.sakib75@gmail.com
//http://sajibtalukder2k16.blogspot.com/2019/01/blog-post_25.html
