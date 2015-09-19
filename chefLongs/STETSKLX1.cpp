#include<bits/stdc++.h>
using namespace std;
#define ll   long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br cout<<endl
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) ( a>b ? a : b )
#define min(a,b) ( a>b ? b : a )
#define arrin(arrname,size) loop(i,0,size) cin>>arrname[i]
#define fastinput ios_base::sync_with_stdio(false)
#define Pair pair<int ,int >
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)
#define MAXL 1000005
int  x[MAXL];
int  y[MAXL];
int  len[MAXL];
int  les[MAXL];
int  more[MAXL];
int  eql[MAXL];
int  dist[MAXL];
bool side[MAXL];
int  n,L,R,md;
int  tmp[MAXL];
int  tmp1[MAXL];
int  tmp2[MAXL];
int  sd,mind;
map<Pair,int > mymap;
#define gc getchar_unlocked
 
void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
 
 }
 
 
void MergeSort(int  a1, int  b1);
void Merge(int  a1,int  b1, int  a2, int  b2);

 
int main()
{ //fastinput;
  int t;
  scanf("%d",&t);
  while(t--)
  {
      
     // mymap.erase(mymap.begin(),mymap.end());
      
      scanf("%d %d %d",&n,&L,&R);
      vector<int > adj[n+4];
     // vector<int > adjtmp[n+4];
      vector<int> adjc[n+4];
      int  a,b,f=0;

      loop(i,0,n-1)
      { scanint(x[i]);
        scanint(y[i]);
        scanint(len[i]);
      }
     /* loop(i,0,n-1)
      { 
         a=x[i]; b=y[i];
         adj[x[i]].push_back(y[i]);
         adj[y[i]].push_back(x[i]);
         adjc[x[i]].push_back(len[i]);
         adjc[y[i]].push_back(len[i]);
         
      }*/
      
      // sort the edges WRT their Lengths
      MergeSort(0,n-2);;
     // loop(i,0,n-1)
     // cout<<i<<"-> "<<x[i]<<"-"<<y[i]<<"  : "<<len[i]<<endl;
    
     vecotr<vector<int> > ex;
     vecotr<vector<int> > ey; 
     ll res=-1;
     loop(i,0,n-1)
     {
          //serach on top of all the stacks  if this edge adds add it to that stack
          int prx=x[i]; int pry=y[i]; bool f=0;
          loop(i,0,ey.size())
           {   if(ey[i][ey[i].size()-1]==prx)
                {     f=1; 
                      ey[i].push_back(pry);
                      ex[i].push_back(prx);
                      if(ey[i].size()>=L && ey[i].size()>=R)
                      {
                      }
                }
           }
          
         
              
     }
    
  }
  return 0;
}
 

void Merge(int  a1,int  b1, int  a2, int  b2)
{
    int  i=a1,j=a2,mk=a1;
      
    while(i<=b1 && j<=b2)
    {
       if(len[i]<=len[j])
       {  tmp[mk]=len[i];
          tmp1[mk]=x[i];
          tmp2[mk]=y[i]; 
          mk++;i++;
       }
       else if(len[i]>len[j])
       {  tmp[mk]=len[j];
          tmp1[mk]=x[j];
          tmp2[mk]=y[j]; 
          mk++;j++;
       }
    }
 
   while(i<=b1)
   {
          tmp[mk]=len[i];
          tmp1[mk]=x[i];
          tmp2[mk]=y[i]; 
          mk++;i++;
   }
  while(j<=b2)
   {
          tmp[mk]=len[j];
          tmp1[mk]=x[j];
          tmp2[mk]=y[j]; 
          mk++;j++;
   }
 
   loop(k,a1,b2+1)
   {  len[k]=tmp[k];
      x[k]=tmp1[k];
      y[k]=tmp2[k];
   }
}
 
 
void MergeSort(int  a1, int  b1)
{
  if(a1==b1)
   return ;
  int  mid=a1+(b1-a1)/2;
  MergeSort(a1,mid);
  MergeSort(mid+1,b1);
  Merge(a1,mid,mid+1,b1);
  
}      
