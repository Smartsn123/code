 #include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) (a>b?a:b) 
#define min(a,b) (a<b?a:b) 
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 1000006
ll arr[MAXL];
char mat[502][502];

ll n,m,sx,sy,dx,dy;

bool mov(ll pi,ll pj)
{
    
    if(pi<1 || pj<1 ||pi>n || pj>m)
     return 0;
   if(pi==dx && pj==dy)
    return 1;
   mat[pi][pj]='X';
   bool ans=0;
   ll li=pi,lj=pj-1,ri=pi,rj=pj+1,ti=pi-1,tj=pj,bi=pi+1,bj=pj;
   if(mat[li][lj]=='.')
   ans=ans||mov(li,lj);
   if(mat[ri][rj]=='.')
   ans=ans||mov(ri,rj);
   if(mat[ti][tj]=='.')
   ans=ans||mov(ti,tj);
   if(mat[bi][bj]=='.')
   ans=ans||mov(bi,bj);
   
   return ans;
}

int main()
{
   

 
   cin>>n>>m;

   loop(i,1,n+1)
    {
      loop(j,1,m+1)
       cin>>mat[i][j];
    }

   cin>>sx>>sy;
   cin>>dx>>dy;
   if(mov(sx,sy))
   cout<<"YES\n";
   else
   cout<<"NO\n";

  return 0;
   
}
