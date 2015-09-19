#include<bits/stdc++.h>
using namespace std;
#define ll  long long 
#define in(a)  scanf("%lld",&a)
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(ll i=k;i<n;i++)
#define loopr(i,k,n) for(ll i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define Pair pair<ll ,ll >
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 1000005

int n, q, sqn;
struct Query
{
	int l, r;
	int ind;
};
int ti[MAXL];
Query Q[MAXL];
int res[MAXL];

map<int,int> ct; 
int val[MAXL];
int L, R, answer;


int Queryry( int i );
void add( int i  );
void remove( int i );
bool f( Query A, Query B )

int main()
{
	
	fastio;
	cin >> n;
	sqn = sqrt( n );
	for( int i = 1; i <= n; i++ )
		cin >> val[i];
	
	for( int i = 1; i <= q; i++ ){
		cin>>ti[i] >> Q[i].l >> Q[i].r; 
		Q[i].ind = i;
	}	
	sort( Q + 1, Q + q + 1, f );
	//for( int i = 1; i <= q; i++ )
	//	cout << Q[i].l << " " << Q[i].r << "\n";
 	
	for( int i = 1; i <= q; i++ )
		res[Q[i].ind] = Queryry( i );
	for( int i = 1; i <= q; i++ )
		cout << res[i] << "\n";
	
	return 0;	
	
}

bool f( Query A, Query B )
{
	if( A.l / sqn < B.l / sqn )
		return true;
	if( A.l / sqn > B.l / sqn )
		return false;
	return A.r < B.r ;
}

void remove( int i )
{
ct[ val[i] ]-=1;
if( ct[ val[i] ] == 0 )
		answer--;
}

void add( int i  )
{
	ct[ val[i] ]+=1;
	if( ct[ val[i] ] == 1 )
		answer++;
}

int Queryry( int i )
 {
    if(t[Q[i].ind)

	while( L < Q[i].l ){
		remove( L );
		L++;
	}
	while( L > Q[i].l ){
		L--;
		add( L );
	}
	while( R < Q[i].r ){
		R++;
		add( R );
	}
	while( R > Q[i].r ){
		remove( R );
		R--;
	}
	return reswer;

}
