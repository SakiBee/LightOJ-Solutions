https://lightoj.com/problem/array-queries


#include<bits/stdc++.h>
using namespace std;
#define     boost           ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 100001;
int tree[3*N];
int arr[N];

void initial(int node, int start, int end){
    if(start == end) {
        tree[node] = arr[start];
        return;
    }
    int l = 2*node, r = 2*node + 1, mid = (start+end)/2;
    initial(l,start,mid);
    initial(r,mid+1,end);
    tree[node] = min(tree[l],tree[r]);
}
int query(int node, int s, int e, int i, int j){
    if(s>j || e<i) return INT_MAX;
    if(s >= i && e <= j) return tree[node];
    
    int l=node*2, r = node*2+1, mid = (s+e)/2;
    int p1 = query(l,s,mid,i,j);
    int p2 = query(r,mid+1,e,i,j);
    return min(p1,p2);
}

int main()
{
    boost;
    int tt,t=0; cin >> tt;
    while(tt--){
        cout << "Case " << ++t << ":" << endl;
        int n,m; cin >> n >> m;
        for(int i=1; i<=n; i++) cin >> arr[i];
        initial(1,1,n);
        for(int i=0; i<m; i++){
            int a,b; cin >> a >> b;
            int q = query(1,1,n,a,b);
            cout << q << endl;
        }
    }
    return 0;
}
