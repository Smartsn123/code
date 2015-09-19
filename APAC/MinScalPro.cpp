#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
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
#define MAXL 100005


int main()
{ ofstream outfile;
  outfile.open("output1.txt");
  ifstream infile; 
  infile.open("A-small-practice.in"); 
  
  fastinput;
  int t;
  infile>>t;
  loop(T,0,t)
  {
      ll arr1[MAXL],n;
      ll arr2[MAXL];
     
       infile>>n;
       loop(i,0,n)
         infile>>arr1[i];
       loop(i,0,n)
         infile>>arr2[i];
       sort(arr1,arr1+n);
       sort(arr2,arr2+n);
       ll ans=0;
       loop(i,0,n)
        ans+= arr1[i]*arr2[n-i-1];
      outfile<<"Case #"<<T+1<<": ";
      outfile<<ans<<endl;
  }
  infile.close();
  outfile.close();
  return 0;
}

