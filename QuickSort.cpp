#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define br printf("\n")
#define loop(i,k,n)  for(int i=k;i<n;i++)

void swap(ull &a , ull &b )
{
   a=a+b;
   b=a-b;
   a=a-b;
}

ull partition(ull arr[] , ull l , ull h)
{
   ull x=arr[h];
   ull i=l-1;

   loop(j,l,h)
   {
        if(arr[j]<=x)
        {
           i++;
           swap(arr[i],arr[j]);
        }
   }
     swap(arr[i+1],arr[h]);

  //  loop(j,l,h+1)
   //{out(arr[j]); printf(" ");}
   //br;
   
    return (i+1);
    
}

void quicksort(ull arr[],ull l , ull h)
{
  if(l<h)
   
  {
  ull i=partition(arr,l,h);
  quicksort(arr,l,i-1);
  quicksort(arr,i+1,h);
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

    quicksort(arr,0,n-1);

   loop(i,0,n)
   {out(arr[i]); printf(" ");}

   br; 
  }
  return 0;
}

