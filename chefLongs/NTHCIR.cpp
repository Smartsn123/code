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



double crv[10];


double cal(double crv1 , double crv2 , double crv3 , double crvp)
{
    double ans1=(crv1+crv2+crv3)+2*sqrt(crv1*crv2+crv2*crv3+crv3*crv1);
    double ans2=(crv1+crv2+crv3)-2*sqrt(crv1*crv2+crv2*crv3+crv3*crv1);

    if(abs(ans1-crvp)<=0.000001)
      return ans2;
    return ans1;
}


int main()
{fastinput;
  double crv1,crv2,crv3,crv4;
  ll N,M,P,B;
  int t;
  cin>>t;
     
   cin>>N>>P>>M>>B;
   cin>>crv1>>crv2>>crv3>>crv4;
         
         crv[1]=1.0/crv1; crv[2]=1.0/crv2; crv[3]=1.0/crv3; crv[4]=1.0/crv4;
         
         
       
          crv[5]=cal(-crv[1],crv[2],crv[4],crv[3]);
         
         crv[6] = -2*crv[1] + 2*crv[2] + 2*crv[5] - crv[4];
         crv[7] = -2*crv[1] + 2*crv[2] + 2*crv[6] - crv[5];
        double a = (-2*crv[6] + crv[7] + crv[5])/2.0;
        double b = (8*crv[6] - 5*crv[5] - 3*crv[7])/2.0;
        double c = crv[7] - 3*crv[6] + 3*crv[5];
        
        
         double ans=0.0;
         loop(i,1,t+1)
         {  
            N= (P * N) % M + B;
            if(N<8)
            ans+=1.0/crv[N];
            else
            {    ll n=N-4;
                double z= (a*n*n )+ (b*n) + c;
                ans+=1.0/z;
            }
        
          }    
          printf("%0.6f\n",ans);
        
         
          return  0;    
}
