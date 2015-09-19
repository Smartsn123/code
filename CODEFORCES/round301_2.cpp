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
ll sum;
ll n,k,p,x,y;


int main()
{
   cin>>n>>k>>p>>x>>y;
   arrin(arr,k);
   loop(i,0,k)
    sum+=arr[i];
   bool f=0;
   ll low=0,high=n-1,mid=low+((high-low)/2);
   sort(arr,arr+k);
   ll cs=0;
   ll j=0;
   //loop(i,0,k)
    //cout<<arr[i]<<" ";
    //br;

   while(arr[j]<y && j<k)
     j++;
   
  //cout<<j<<endl;
  if( j>=(mid+1) || sum>x )
    cout<<"-1"<<endl;
  else
   {  
      ll lf=j;
      ll rf=k-j;
      //cout<<lf<<" : "<<rf<<endl;
      sum+=min((n-k),(mid-j))*1;
      sum+=max(0,mid+1-(k-j))*y;
      
    if(sum<=x)
     { loop(i,0,min((n-k),(mid-j)))
         cout<<"1 ";
       loop(i,0,max(0,mid+1-(k-j)))
         cout<<y<<" ";
       br;
     }
     else
       cout<<"-1"<<endl;
           
      
           
   }
  
   return 0;  
   
}
