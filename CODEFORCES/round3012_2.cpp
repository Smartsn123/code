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


int main()
{ fastinput;
    
   ll n,k;
   cin>>n>>k;
   ll cells=n*n;

   if(k>((cells+1)/2))
    cout<<"NO"<<endl;
   else
   {  cout<<"YES"<<endl;
      loop(i,0,n)
      {
          loop(j,0,n)
          {  if(k)
              { if((i%2) == (j%2))
                 {cout<<"L"; k--;}
                else
                 cout<<"S";
               
              }
             else
              cout<<"S";
          }
           br;
      }

    }

  return 0;
}
