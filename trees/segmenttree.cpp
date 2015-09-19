#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mod 1000000007
#define mapiterate(it,mapname)  for(it=mapname.begin();it!=mapname.end();++it)


struct node{
  int l;
  int r;
  int val;
};

node tre[100005];
ull sums[100005];
ull arr[100005];


void  maketre(int ind,int a,int b)
{ 
  
  tre[ind].l=a;
  tre[ind].r=b;
  int mid=a+((b-a)/2);

  if(a==0)
    tre[ind].val=sums[b];
  else
    tre[ind].val=sums[b]-sums[a-1];
   
 // cout<<"creating node "<<ind<<"--"<<a<<" , "<<b<<" : "<<tre[ind].val<<endl;
  if(a!=b)
  { maketre(2*ind+1,a,mid);
    maketre(2*ind+2,mid+1,b); 
  }   
}


ull findfunc(int sl,int sr,int ind)
{
  if(tre[ind].l>=sl && tre[ind].r<=sr)
    return  tre[ind].val;

  else if(tre[ind].l >sr || tre[ind].r<sl)
   return 0;

  else
   return findfunc(sl,sr,2*ind+1)+ findfunc(sl,sr,2*ind+2) ;
   
}


void updateInc(int ul,int ur,int ind,int v)
{
   int a=tre[ind].l;
   int b=tre[ind].r;

   if(a >ur || b<ul)
      return;
   else if(a!=b)
    {
        updateInc(ul,ur,2*ind+1,v);
        updateInc(ul,ur,2*ind+2,v);
        tre[ind].val=tre[2*ind+1].val+ tre[2*ind+2].val;
        return;
    }
    else if(a==b && a<=ur && a>=ul)
     { tre[ind].val+=v; return;}
   
  
}


int main()
{
  
  ull n;
  cin>>n;
  arrin(arr,n);
  sums[0]=arr[0];
  loop(i,1,n) 
   sums[i]=sums[i-1]+arr[i];
  maketre(0,0,n-1);
  

  //updateInc(2,3,0,1);

  cout<<findfunc(2,4,0)<<endl;
  
}
