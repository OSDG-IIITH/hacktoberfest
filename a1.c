    #include <iostream>
    #include <vector>
    #include <stack>
    #include <map>
    #include <queue>
    #include <algorithm>
    #include <cstring>
    #include <cstdio>
    #include <cmath>
    using namespace std;
    typedef long long lol;
    #define next NEXT
    int gi(){
        int res=0,fh=1;char ch=getchar();
        while((ch>'9'||ch<'0')&&ch!='-')ch=getchar();
        if(ch=='-')fh=-1,ch=getchar();
        while(ch>='0'&&ch<='9')res=res*10+ch-'0',ch=getchar();
        return fh*res;
    }
    const int MAXN=600010;
    const int MAXM=2400010;
    const int K=20;
    const lol INF=1e18;
    int bt,b[MAXN],next[MAXM],to[MAXM],val[MAXM];
    inline void add(int x,int y,int z){
        next[++bt]=b[x];b[x]=bt;to[bt]=y;val[bt]=z;
        next[++bt]=b[y];b[y]=bt;to[bt]=x;val[bt]=z;
    }
    int dt,dfn[MAXN],dfr[MAXN],f[K][MAXN],dep[MAXN];
    void dfs(int x){
        dfn[x]=++dt;
        for(int i=b[x];i;i=next[i]){
            if(to[i]==f[0][x])continue;
            f[0][to[i]]=x;
            dep[to[i]]=dep[x]+1;
            dfs(to[i]);
        }
        dfr[x]=dt;
    }
    int lca(int x,int y){
        if(dep[x]<dep[y])swap(x,y);
        int d=dep[x]-dep[y];
        for(int i=0,p=1;i<K;i++,p<<=1)
            if(d&p)x=f[i][x];
        if(x==y)return x;
        for(int i=K-1;i>=0;i--){
            if(f[i][x]==f[i][y])continue;
            x=f[i][x];y=f[i][y];
        }
        return f[0][x];
    }
    int mp1[MAXN],mu1[MAXN],mp2[MAXN],mu2[MAXN];
    int qp1[MAXN],qu1[MAXN],qp2[MAXN],qu2[MAXN];
    vector <int> wm[MAXN];
    bool cmp(int x,int y){return dfn[x]<dfn[y];}
    stack <int> s;
    map <pair<int,int>,int> MAP;
    struct point{
        int x;lol dis;
        bool operator <(const point b) const{return dis>b.dis;}
    };
    priority_queue <point> q;
    lol dis[MAXN];
    bool vis[MAXN];
    int main(){
        int n=gi(),m=gi(),Q=gi();
        for(int i=1;i<n;i++)add(gi(),gi(),1);
        dfs(1);
        for(int j=1;j<K;j++)
            for(int i=1;i<=n;i++)f[j][i]=f[j-1][f[j-1][i]];
        for(int i=1;i<=n;i++)b[i]=0;bt=0;
        for(int i=1;i<=m;i++){
            mp1[i]=gi(),mu1[i]=gi(),mp2[i]=gi(),mu2[i]=gi();
            wm[mu1[i]].push_back(mp1[i]);
            wm[mu2[i]].push_back(mp2[i]);
        }
        for(int i=1;i<=Q;i++){
            qp1[i]=gi(),qu1[i]=gi(),qp2[i]=gi(),qu2[i]=gi();
            wm[qu1[i]].push_back(qp1[i]);
            wm[qu2[i]].push_back(qp2[i]);
        }
        int tt=0;
        for(int i=1;i<=200000;i++){
            if(wm[i].empty())continue;
            sort(wm[i].begin(),wm[i].end(),cmp);
            wm[i].erase(unique(wm[i].begin(),wm[i].end()),wm[i].end());
            int t=wm[i].size();
            for(int j=0;j<t-1;j++)wm[i].push_back(lca(wm[i][j],wm[i][j+1]));
            wm[i].push_back(1);
            sort(wm[i].begin(),wm[i].end(),cmp);
            wm[i].erase(unique(wm[i].begin(),wm[i].end()),wm[i].end());
            t=wm[i].size();
            s.push(0);MAP[{i,1}]=tt+1;
            for(int j=1;j<t;j++){
                int p=wm[i][j];
                MAP[{i,p}]=tt+1+j;
                while(dfn[p]>dfr[wm[i][s.top()]])s.pop();
                add(tt+1+s.top(),tt+1+j,dep[p]-dep[wm[i][s.top()]]);
                s.push(j);
            }
            tt+=t;
        }
        for(int i=1;i<=m;i++)add(MAP[{mu1[i],mp1[i]}],MAP[{mu2[i],mp2[i]}],1);
        for(int i=1;i<=Q;i++){
            int u=MAP[{qu1[i],qp1[i]}],v=MAP[{qu2[i],qp2[i]}];
            for(int j=1;j<=tt;j++)dis[j]=INF,vis[j]=0;
            while(!q.empty())q.pop();
            q.push((point){u,dis[u]=0});
            while(!q.empty()){
                int x=q.top().x;q.pop();
                if(vis[x])continue;
                vis[x]=1;
                if(x==v)break;
                for(int k=b[x];k;k=next[k]){
                    if(dis[x]+val[k]>=dis[to[k]])continue;
                    dis[to[k]]=dis[x]+val[k];
                    q.push((point){to[k],dis[to[k]]});
                }
            }
            if(dis[v]==INF)printf("impossible\n");
            else printf("%lld\n",dis[v]);
        }
        return 0;
    }   
