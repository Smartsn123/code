#include<bits/stdc++.h>
using namespace std;

#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n)  for(int i=k;i<n;i++)
#define ull long long int

int main()
{
  ull t;
  in(t);
  while(t--)
  {
    ull n;
    ull arr[100005];
    in(n);
    
    loop(i,0,n)
    in(arr[i]);

    ull cur=0;
    ull all=0;

    loop(i,0,n)
     {
         if(cur<arr[i])
          {all+=(arr[i]-cur); cur=arr[i];}
         else
           cur=arr[i];
     }

     out(all); br;
     
  }

  return 0;  
}

