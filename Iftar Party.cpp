//https://lightoj.com/problem/iftar-party

/**
 *   Md. Sakib Uddin
 *   RMSTU
**/
#include<bits/stdc++.h>
#define     ll                     long long
#define     all(v)                 v.begin(),v.end()
#define     revall(v)              v.rbegin(),v.rend()
#define     pb                     push_back
#define     eb                     emplace_back
#define     mk                     make_pair
#define     M                      10000000
using namespace std;

int main()
{
   ll tt,t=0; cin>>tt;
   while(tt--)
   {
       t++;
       vector<ll>v;
       ll p,l,x,n;
       cin>>p>>l;
       n = p-l;
       printf("Case %lld:", t);
       if(n<=l) printf(" impossible");
       else
       {
            for(ll i=1; i*i<=n; i++)
            {
                if(n%i==0)
                {
                    if(n/i>l)
                    {
                        v.pb(n/i);
                    }
                    if(i>l && n/i!=i)
                    {
                        v.pb(i);
                    }
                }
            }
        }
        sort(all(v));
        for(ll i=0; i<v.size(); i++)
        {
            printf(" %lld",v[i]);
        }
       printf("\n");
   }
}
