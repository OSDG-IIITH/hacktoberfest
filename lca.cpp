#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
const ll lt=100005;
vector<int> adj[lt];
vector<int> arr;
vector<int> st(lt,0);
vector<int> en(lt,0);
vector<int> ht(lt,0);
vector<int> par(lt,0);
int p[lt][25];

int tp=0;
bool visited[lt];

void dfs(int u,int l)
{
	ht[u]=l;
	arr.push_back(u);
	visited[u]=1;
	st[u]=tp++;
	for(int i=0;i<adj[u].size();i++)
	{
		int v=adj[u][i];
		if(!visited[v])
		{
			par[v]=u;
			p[v][0]=u;
			dfs(v,l+1);
		}
	}
	en[u]=tp+1;
}

int find_lca(int a,int b)
{
	if(ht[a]==ht[b])
	{
		if(a==b)
			return a;
		else
			return find_lca(par[a],par[b]);
	}
	else if(ht[a]>ht[b])
	{
		a=par[a];
		return find_lca(a,b);
	}
	else
		return find_lca(b,a);
}

int find_lca2(int a,int b)
{
	if(ht[a]==ht[b])
	{
		if(a==b)
			return a;
		else
			return find_lca2(p[a][0],p[b][0]);
	}
	else if(ht[a]>ht[b])
	{
		int diff=ht[a]-ht[b];

		for(int i=0;i<21 && diff>0;i++)
		{
			if((diff>>i) & 1)
				a=p[a][i];
		}

		return find_lca2(a,b);
	}
	else
		return find_lca2(b,a);
}

int main()
{
	int n;
	cin >> n;
	for(int i=0;i<n-1;i++)
	{
		int u,v;
		cin >> u >> v;
		adj[u].push_back(v);
		adj[v].push_back(u);
	}
	dfs(1,0);

	p[1][0]=1;

	for(int j=1;j<=21;j++)
		for(int i=1;i<=n;i++)
			p[i][j]=p[p[i][j-1]][j-1];

	int a,b;
	cin >> a >> b;
	cout << find_lca(a,b) << endl;
	cout << find_lca2(a,b) << endl;
}
