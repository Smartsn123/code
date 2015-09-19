#include<bits/stdc++.h>
using namespace std;
#define ull long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n)  for(int i=k;i<n;i++)

ull selsort(ull arr[], ull n)
{
 
  loop(i,1,n)
  {   
     ull j=i-1;
     ull temp=arr[i];
     while(j>=0 && temp<arr[j] )
      { arr[j+1]=arr[j]; 
        j--;
      }
     if(j<=0)
      arr[0]=temp;
     else
       arr[j+1]=temp;
     
     loop(k,0,n)
     { out(arr[k]); printf(" "); }
      br;
  }  
}

int main()
{
  ull t;
  in(t);
  while(t--)
  {
    ull arr[100000];
    ull n;
    in(n);
  
    loop(i,0,n)
    in(arr[i]);

    selsort(arr,n);

   
  }

  return 0;  
}

