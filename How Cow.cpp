https://lightoj.com/problem/how-cow

/** Author: Md. Sakib Uddin.
    From: RMSTU             **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int x1,y1,x2,y2,tt,a,b,i,j,m;
    cin>>tt;
    for(i=1;i<=tt;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>m;
        printf("Case %lld:\n",i);
        for(j=1;j<=m;j++)
        {
            cin>>a>>b;
            if((a>=x1 && a<=x2) && (b>=y1 && b<=y2)) printf("Yes\n");
            else printf("No\n");
        }
    }
    return 0;
}
