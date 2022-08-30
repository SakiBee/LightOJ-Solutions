https://lightoj.com/problem/guilty-prince


#include<bits/stdc++.h>
using namespace std;
#define   pb        push_back
#define   optimize  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)

const int M = 22;
char mat[M][M];
bool vis[M][M];

int tot,n,m;

int dx[] = {-1,0,1,0};
int dy[] = {0,1,0,-1};

bool isValid(int x, int y)
{
	if(x < 1 || x > m || y > n || y < 1) return false;
	if(vis[x][y] || mat[x][y] == '#') return false;
	return true;
}

int dfs(int x, int y)
{
	vis[x][y] = 1;
	tot++;

	if(isValid(x-1,y)) dfs(x-1,y);
	if(isValid(x,y+1)) dfs(x,y+1);
	if(isValid(x+1,y)) dfs(x+1,y);
	if(isValid(x,y-1)) dfs(x,y-1);

	return tot;
}

int main()
{
	//optimize;
	int tc,t=0; cin >> tc;
	while(tc--)
	{
		tot = 0;
		int a,b; cin >> n >> m;
		for(int i=1; i<=m; i++)
			for(int j=1; j<=n; j++){
				vis[i][j] = 0;
				cin >> mat[i][j];
				if(mat[i][j] == '@') a = i, b = j;
			}	
		dfs(a,b);
		cout << "Case " << ++t << ": " << tot << '\n';
	}
}
