https://lightoj.com/problem/sum-of-factorials


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
#define     yes             cout << "YES" << '\n'
#define     no              cout << "NO" << '\n'
#define     coutl(x)        cout << x << '\n'
#define     cout(x)         cout << x
#define     nl              cout << '\n'
#define     CASE(t)         printf("Case %lld: ",++t)
#define     pi              2*acos(0)
#define     inf             0x3f3f3f3f
#define     E               2.71828182845904523536
#define     gamma           0.5772156649



int main()
{
    ll fct[25];
    fct[0] = 1;
    fct[1] = 1;
    for(ll i=2; i<21; i++)
    {
        fct[i] = fct[i-1] * i;
    }

    ll t=0, tt;
    cin >> tt;
    while(tt--)
    {
        ll n; cin >> n;
        vll v;
        for(ll i=20; i>=0; i--)
        {
            if(fct[i] <= n)
            {
                n -= fct[i];
                v.pb(i);
            }
        }
        CASE(t);
        reverse(all(v));
        char c = '!';
        if(n == 0)
        {
            for(ll i=0; i<v.size(); i++)
            {
                cout << v[i] << c;
                if(i != v.size()-1) cout << '+';
            }nl;
        }
        else
        cout << "impossible" << endl;

    }
}





