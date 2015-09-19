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
struct req 
{
    ll  l, r, vlu, ind;
    bool t;
};

bool operator <( req a, req b ) {
    if ( a.r == b.r ) {
        return a.t < b.t;
    }
    return a.r < b.r;
}

ll  N, Q;
req arr[ MAXL];
bool col[MAXL];
ll  b_tree[MAXL];

void add( ll  y, ll  vlu );
ll  sum( ll  y );
int  main() 
{
    
    ll  *prev = new ll [MAXL];

    loop(i,0,MAXL)
    {
        col[i] = false;
        prev[i] = 0;
    }
   
    scanf( "%lld %lld",&N,&Q);
    
    loop(i,1,N+1)
    add(i,1);
    
    
   loop(i,0,N)
    {
        scanf( "%lld", &arr[i].vlu );
        arr[i].ind =i+1;
        arr[i].t = 0;
        arr[i].r = i+1;
    }
    ll t;

    loop(j,N,N+Q)
    {
        scanf( "%lld %lld %lld", &t,&arr[j].l, &arr[j].r );
        arr[j].ind=j- N;
        arr[j].t =1;
    }

    sort( arr, arr+N+Q);

    ll  ans[Q];
    loop(j,0,N+Q)
      {
        if (arr[j].t) 
          ans[arr[j].ind] = sum(arr[j].r) - sum(arr[j].l-1);
        
        else 
          {
            if(col[ arr[j].vlu ]) 
               {
                if (prev[ arr[j].vlu ]!=0) 
                  add( prev[ arr[j].vlu ],-1);
                
                }
            col[arr[j].vlu] = true;
            prev[arr[j].vlu] = arr[j].ind;
        }
    }
    
    loop(i,0,Q)
     printf( "%lld\n", ans[i] );
    
    return 0;

}

void add( ll  y, ll  vlu )
 {
    while ( y <= 300000 ) 
    {
        b_tree[y] += vlu;
        y += ( y & -y);
    }
}

ll  sum(ll  y) 
{
    ll  res = 0;
    while (y >0)
    {
        res += b_tree[y];
        y -= ( y & -y );
    }
    return res;
}
