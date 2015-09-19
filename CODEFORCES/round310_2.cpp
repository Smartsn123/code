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
#define arrin(arrname,size) loop(t,0,size) cin>>arr[t]
#define fastinput ios_base::sync_with_stdio(false)
int arr[1000006];
int status[1000006];
int n;


int rc(int steps,int cur)
{
   return (cur+steps)%n;
}

int rac(int steps,int cur)
{
   if(steps>cur)
    return n-steps+cur;
   else
    return cur-steps;
}

int main()
{ 
  
  
  
  in(n);
  arrin(arr,n);

  int dif=(n-arr[0])%n;
   int flag=1;
  loop(i,1,n)
  {  
     int val;
     if(i%2==1)
      val=rac(dif,arr[i]);
     else
      val=rc(dif,arr[i]);
     
     if(val!=i)
      {flag=0; }
     
  } 


  if(flag)
    cout<<"Yes"<<endl;
  else
   cout<<"No"<<endl;
  
  return 0;
}
