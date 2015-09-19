#include<bits/stdc++.h>
using namespace std;
#define ll  long  long 
#define in(a)  cin>>a
#define out(a)  cout<<a
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 1000006
 
int arr[MAXL];
int lf[MAXL];
int rt[MAXL];
bool sums[MAXL];
int stackv[MAXL];
int stacki[MAXL];
int storev[MAXL];
char lis[MAXL];
int n,m;
#define gc getchar_unlocked
 
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
 
 }
inline int Floor(int A[], int x, int y, int key)
{
    int m;
 
    while( y - x > 1 )
    {
        m = x + (y - x)/2;
 
        if( A[m] <= key )
            x = m;
        else
            y = m;
    }
 
    return x;
}
 
void determine_l()
{
  int stf=n;
    stackv[n]=INT_MAX;
    stacki[n]=-1;
  loop(i,0,n)
    {  
       if(arr[i]<stackv[stf])
       {  lf[i]=stacki[stf]+1;
          stackv[--stf]=arr[i]; stacki[stf]=i;
         }
       else 
        { ll ind=Floor(stackv,stf,n,arr[i]);
          if(stackv[ind]==arr[i])
          lf[i]=stacki[ind]+1;
          else
          lf[i]=stacki[ind+1]+1;
 
          stackv[ind]=arr[i]; stacki[ind]=i;stf=ind;
        }
      
    }
  
}
 
 
void determine_r()
{
  int stf=n;
    stackv[n]=INT_MAX;
    stacki[n]=n;
 
  loopr(i,n-1,0)
    {  
       if(arr[i]<stackv[stf])
       {  rt[i]=stacki[stf]-1;
          stackv[--stf]=arr[i]; stacki[stf]=i;
         }
       else 
        { ll ind=Floor(stackv,stf,n,arr[i]);
          rt[i]=stacki[ind+1]-1;
          stackv[ind]=arr[i]; stacki[ind]=i;stf=ind;
        }
      
    }
  
}
 
 
 
 
 
int main()
{  //fastinput;
    
    scanf("%d %d",&n,&m);
    loop(i,0,n)
       scanf("%d",&arr[i]);
    //maketree(0,n-1,0);
    map<ll,bool> mymap ; 
    map<ll,bool> :: iterator it;
    
    determine_l();
    determine_r();
   /*
    loop(i,0,n)
     cout<<lf[i]<<" ";
    br;
    loop(i,0,n)
     cout<<rt[i]<<" ";
    br;
   */

    loop(i,0,n)
     mymap[arr[i]]= mymap[arr[i]]^(((i-lf[i]+1)%2)&&((1+(rt[i]-i))%2));
  
    int size=1;
     sums[0]=0;
     storev[0]=0;
     mapiter(mymap,it)
     { if(size==1)
         sums[size]=it->second;
       else
         sums[size]=sums[size-1]^((it->second)%2);
     //  cout<<it->first<<" : "<<it->second<<" "<<sums[size]<<endl;
        
           storev[size]=it->first;
          size++;
       
     }
     
     storev[size]=INT_MAX;
     sums[size]=sums[size-1]^0;
     sums[-1]=0;
    // cout<<sums[size-1]<<endl;
    char ct,b[2],bi;
    b[0]='C'; b[1]='D';
    int k;
    char inp[10];
   
    loop(i,0,m)
    {   scanf(" ");
       // scanf(" %c %d %c",&ct,&k,&bi);
        //cout<<ct<<k<<bi<<endl;
         ct=gc(); scanint(k); bi=gc();        
        int stps=0;
        int ind=Floor(storev,0,size,k);
 
        if(ct=='=')
        { if(k==storev[ind])
           stps=mymap[k];
         }
        else if(ct=='>')
         stps=sums[size-1]^sums[ind];
        else
         stps=( storev[ind]==k ?  sums[ind-1]:sums[ind]); 
      
        // cout<<stps<<endl;
      bool wi=bool(bi-int('C'));
      if(!stps)
        wi=!wi;
     
     lis[i]=b[wi];  
      
    }
    lis[m]='\0';
    //cout<<lis<<endl;
     printf("%s\n",lis);
     //puts(lis); 
     
  return 0;
}     
