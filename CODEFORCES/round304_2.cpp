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
#define MAXL 1000006

ll n;
ll arr[MAXL];
ll arrcp[MAXL];
int main()
{ fastinput;
  
   cin>>n;
   arrin(arr,n);

   sort(arr,arr+n);
   loop(i,0,n)
    arrcp[i]=arr[i];
   ll ct=0;
   loop(i,1,n)
    { if( arrcp[i]==arrcp[i-1] || (arr[i]<=arr[i-1]))
        {arr[i]=arr[i-1]+1; ct+=arr[i]-arrcp[i];}
    }

  cout<<ct<<endl;

  return 0;
}
