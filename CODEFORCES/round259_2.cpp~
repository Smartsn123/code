 #include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define max(a,b) a>b?a:b 
#define min(a,b) a<b?a:b 
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(mymap,it) for(it=mymap.begin();it!=mymap.end();it++)

ll arr[1000006];
ll n;


int main()
{
   in(n);
   arrin(arr,n);

   //find the smallest element
   int mini=-1,minim=INT_MAX;
   loop(i,0,n)
   {
      if(arr[i]<minim)
       {mini=i;minim=arr[i];}
    }
    //cout<<mini<<endl;
   int flag=0,prev;
   
   prev=arr[mini];

     loop(i,mini+1,n)
   { if(arr[i]<=prev)
      flag=1;
     prev=arr[i];
    }

   loop(i,0,mini)
   { if(arr[i]<=prev)
     flag=1;
     prev=arr[i];
    }
 
if(flag)
   cout<<"-1"<<endl;
   else
   cout<<(n-mini)%n<<endl;
  return 0;  
}
