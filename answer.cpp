#include <bits/stdc++.h>
#define xx first
#define yy second
#define mp make_pair
#define pb push_back
#define fill( x, y ) memset( x, y, sizeof x )
#define copy( x, y ) memcpy( x, y, sizeof x )
using namespace std;
 
typedef long long LL;
typedef pair < int, int > pa;
 
inline int read()
{
	int sc = 0, f = 1; char ch = getchar();
	while( ch < '0' || ch > '9' ) { if( ch == '-' ) f = -1; ch = getchar(); }
	while( ch >= '0' && ch <= '9' ) sc = sc * 10 + ch - '0', ch = getchar();
	return sc * f;
}
 
const int MAXN = 5005;
 
int n, Q, l[MAXN][MAXN], r[MAXN][MAXN], mn[MAXN], mx[MAXN], size[MAXN];
vector < int > G[MAXN];
bool col[MAXN];
 
inline void dfs(int x, int fa = 0)
{
	l[ x ][ 1 ] = r[ x ][ 1 ] = col[ x ];
	size[ x ] = 1;
	for( auto y : G[ x ] ) if( y ^ fa ) dfs( y, x ), size[ x ] += size[ y ];
	for( int i = 2 ; i <= size[ x ] ; i++ ) l[ x ][ i ] = n, r[ x ][ i ] = 0;
	size[ x ] = 1;
	for( auto y : G[ x ] ) if( y ^ fa )
	{
		for( int j = size[ x ] ; j ; j-- )
			for( int k = size[ y ] ; k ; k-- )
				l[ x ][ j + k ] = min( l[ x ][ j + k ], l[ x ][ j ] + l[ y ][ k ] ),
				r[ x ][ j + k ] = max( r[ x ][ j + k ], r[ x ][ j ] + r[ y ][ k ] );
		size[ x ] += size[ y ];
	}
	for( int i = 1 ; i <= size[ x ] ; i++ ) mn[ i ] = min( mn[ i ], l[ x ][ i ] ), mx[ i ] = max( mx[ i ], r[ x ][ i ] );
}
 
inline void solve()
{
	n = read(); Q = read();
	for( int i = 1 ; i <= n ; i++ ) G[ i ].clear(), mn[ i ] = n, mx[ i ] = 0;
	for( int i = 1, x, y ; i < n ; i++ ) x = read(), y = read(), G[ x ].pb( y ), G[ y ].pb( x );
	for( int i = 1 ; i <= n ; i++ ) col[ i ] = read();
	dfs( 1 );
	while( Q-- )
	{
		int s = read(), b = read();
		if( mn[ s ] <= b && mx[ s ] >= b ) puts( "Yes" );
		else puts( "No" );
	}
}
 
int main()
{
#ifdef wxh010910
	freopen( "data.in", "r", stdin );
#endif
	for( int T = read() ; T ; T-- ) solve();
	return 0;
}
