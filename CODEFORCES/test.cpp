//Written by Sunny Singh IPG_2012086 ABV-IIITM Gwalior 
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
#define mod 1000000007
#define MAXL 1000006

void get_primefc(ll sum)
{
   ll ci=rand() %2 + 0;
  if(ci)
  { ll def=991;
   ll d1=rand()%min(sum,9) + 1;
   ll rem=sum-d1;
   ll d2=rand()%(min(10,rem+1))+ 0;
   ll d3=rem-d2;
   if(d3/10 >=1)
    cout<<def;
   else
   cout<<d1<<d2<<d3;
  }
  else
  {  cout<<rand() % 9+ 1<<rand() % 10+ 0<<rand() % 10+ 0;
  }
}


int main()
{ fastinput;
  ll n,t;
   t = rand() % 100+ 1;
cout<<t<<endl;
  while(t--)
  { ll arr[10]={2,3,5,7,11,13,17,19};
    int ind= rand() % 8 + 0;
    get_primefc(arr[ind]);
    ll sec=rand() %2 + 2;
   ll ci=rand() %2 + 0;

   if(ci)
   { if(sec==3)
    {
       ll ans=sec* (rand() %30 + 4);
        cout<<ans;
    }
   else
    {
       ll ans=sec*(rand() %45 + 5);
         cout<<ans;
    }
   }
   else
   {
       cout<<rand() % 9+ 1<<rand() % 10+ 0;
   }

    // generating last 5 digits
   
    ll ev[5]={2,4,6,8};
    ll odd[5] ={3,5,7};
    ll a,b,c;
    a=rand() %5 + 0;
    if(a!=4)
    b=rand() %(5-a) + (a+1);
    else
    b=rand() %4 + 0;
    c=rand() %2 + 0;
     if(c)
   { loop(i,0,5)
    {
       if(i==a || i==b)
        cout<<ev[rand() %3 + 0];
       else
        cout<<odd[rand() %4 + 0];
    }  
   }
    else
  { loop(i,0,5)
    {
       if(i==a || i==b)
        cout<<odd[rand() %4 + 0];
       else
        cout<<ev[rand() %3 + 0];
    }
   }
     
    
    br;
  }
  return 0; 
}
