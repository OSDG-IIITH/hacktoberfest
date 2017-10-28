#include <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(int)(n);++(i))
#define reu(i,l,u) for(int (i)=(int)(l);(i)<(int)(u);++(i))
#define each(it,o) for(auto it= (o).begin(); it != (o).end(); ++ it)
#define all(o) (o).begin(), (o).end()
#define mp(x,y) make_pair((x),(y))
#define mset(m,v) memset(m,v,sizeof(m))
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL
#define inrep int t;cin>>t; while(t--)
#define sz(x) int(x.size())
using namespace std;
 
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii > vpii;
typedef long long ll;
typedef vector<ll> vll;
typedef pair<ll,ll> pll;
typedef vector<pll > vpll;
typedef vector<string> vs;
typedef long double ld;
 
template<typename T> ostream& operator<< ( ostream &o,vector<T> v ) {
    if ( v.size() >0 )
        o<<v[0];
    for ( unsigned   i=1; i<v.size(); i++ )
        o<<" "<<v[i];
    return o<<endl;
}
template<typename U,typename V> ostream& operator<< ( ostream &o,pair<U,V> p ) {
    return o<<"("<<p.first<<", "<<p.second<<") ";
}
template<typename T> istream& operator>> ( istream &in,vector<T> &v ) {
 
    for ( unsigned   i=0; i<v.size(); i++ )
        in>>v[i];
    return in;
}
int MAXN=1001;
vi mamiGreater ( const vector<vi> &a ) {
 
    int n=sz ( a );
 
    vi bc ( n,0 );
    rep ( i,n ) {
        vi vals=a[i];
        sort ( all ( vals ) );
        rep ( j,sz ( vals ) ) bc[j]=max ( bc[j],vals[j] );
    }
//     rep ( j,n-1 ) bc[i]=max ( bc[i],bc[i-1] );
    return bc;
}
vi mamiSmall ( const vector<vi> &a ) {
 
    int n=sz ( a );
    vi v;
    rep ( i,n ) {
        int mi=*min_element ( all ( a[i] ) );
        v.push_back ( mi );
    }
    sort ( all ( v ),greater<int>() );
//     rep ( i,n ) {
//         bc[i]=v[i];
//
//     }
    return v;
 
}
vi mimaSmall ( const vector<vi> &a ) {
    int n=sz ( a );
    vi bc ( n,INF );
    rep ( i,n ) {
        vi vals=a[i];
        sort ( all ( vals ) ,greater<int>() );
        rep ( j,sz ( vals ) ) bc[j]=min ( bc[j],vals[j] );
    }
    return bc;
}
 
vi mimaGreater ( const vector<vi> &a ) {
    int n=sz ( a );
    vi v;
    rep ( i,n ) {
        int mi=*max_element ( all ( a[i] ) );
        v.push_back ( mi );
    }
    sort ( all ( v ) );
    return v;
}
int mima ( const vector<vi> &a ) {
 
    int n=sz ( a );
    vi v;
    rep ( i,n ) v.push_back ( *max_element ( all ( a[i] ) ) );
    return *min_element ( all ( v ) );
}
int mami ( const vector<vi> &a ) {
 
    int n=sz ( a );
    vi v;
    rep ( i,n ) v.push_back ( *min_element ( all ( a[i] ) ) );
    return *max_element ( all ( v ) );
}
int main() {
    ios_base::sync_with_stdio ( false );
    int n;
    cin>>n;
    vector<vi> a ( n,vi ( n ) );
    cin>>a;
    vector<vi> at ( n,vi ( n ) );
    rep ( i,n ) rep ( j,n ) at[i][j]=a[j][i];
    int l=mami ( a );
    int r=mima ( at );
    vi s, b;
//     cout<<l<<" "<<r<<endl;
 
    if ( l==r ) {
        cout<<0<<endl;
        return 0;
    } else if ( l>r ) {
        s=mamiSmall ( a );
        b=mimaGreater ( at );
    } else {
        b=mamiGreater ( a );
        s=mimaSmall ( at );
    }
// cout<<b<<s<<endl;
    int j=n-1;
    int bv=INF;
    rep ( i,n ) {
        while ( j>=0 &&s[j]<=b[i] ) j--;
        j++;
        bv=min ( bv, i+j );
 
    }
    cout<<bv<<endl;
 
 
 
 
 
} 
