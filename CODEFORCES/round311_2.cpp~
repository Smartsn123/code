 #include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define in(a)  cin>>a
#define out(a)  cout<<a;
#define br printf("\n")
#define loop(i,k,n) for(int i=k;i<n;i++)
#define loopr(i,k,n) for(int i=k;i>=n;i--)
#define arrin(arrname,size) loop(i,0,size) cin>>arr[i]
#define fastinput ios_base::sync_with_stdio(false)
#define mapiter(it,mymap) for(it=mymap.begin();it!=mymap.end();it++)


int main()
{
  int n;
  int amin,amax,bmin,bmax,cmin,cmax,a,b,c;
  cin>>n;
  cin>>amin>>amax;
  cin>>bmin>>bmax;
  cin>>cmin>>cmax;

  c=max(cmin,max(1,n-bmax-amax));
  int k=n-c;
  b=max(bmin,max(1,k-amax));
  a=n-c-b;

  cout<<a<<" "<<b<<" "<<c<<endl;

  return 0;
}
