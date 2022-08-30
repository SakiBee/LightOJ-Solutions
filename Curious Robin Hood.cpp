https://lightoj.com/problem/curious-robin-hood


#include<bits/stdc++.h>
using namespace std;
#define boost  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int N = 100001;
int tree[3*N];
int arr[N];

void initial(int node, int start, int end){
    if(start == end){
        tree[node] = arr[start];
        return;
    }
    int l = 2*node, r = 2*node + 1, mid = (start+end)/2;
    initial(l,start,mid);
    initial(r,mid+1,end);
    tree[node] = tree[l]+tree[r];
}
int query(int node, int s, int e, int i, int j){
    if(i>e || j<s) return 0;
    if(s>=i && e<=j) return tree[node];
    int l=node*2, r = node*2+1, mid = (s+e)/2;
    int p1 = query(l,s,mid,i,j);
    int p2 = query(r,mid+1,e,i,j);
    return (p1+p2);
}
void update(int node, int s, int e, int i, int value){
    if(i<s || i>e) return;
    if(s == e and e == i){
        tree[node] = value;
        return;
    }
    int l=node*2, r = node*2+1, mid = (s+e)/2;
    update(l,s,mid,i,value);
    update(r,mid+1,e,i,value);
    tree[node] = tree[l]+tree[r];
}

int main(){
    boost;
    int tt,t=0;
    cin >> tt;
    while(tt--){
        cout << "Case " << ++t << ":" << endl;
        int n,q,x,p,y; cin >> n >> q;
        for(int i=1; i<=n; i++) cin >> arr[i];
        initial(1,1,n);
        while(q--){
            cin >> x;
            if(x == 1){
                cin >> p;
                cout << arr[p+1] << endl;
                update(1,1,n,p+1,0);
                arr[p+1] = 0;
            }
            else if(x == 2){
                cin >> p >> y;
                int x = arr[p+1] + y;
                update(1,1,n,p+1,x);
                arr[p+1] += y;
            }
            else{ 
                cin >> p >> y; 
                cout << query(1,1,n,p+1,y+1) << endl;
            }
        }
    }return 0;
}
