#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
#define in(a)  scanf("%lld",&a)
#define out(a)  printf("%lld",a)
#define loop(i,k,n) for(int i=k;i<n;i++)
#define br printf("\n")

void MaxHeapify(ull arr[],ull size,ull ind)
{
  ull lt=size-1;
  if(ind>lt)
   return;

  ull max3=arr[ind];
  ull max_i=ind;
  ull l=2*ind+1;
  ull r=2*ind+2;

  MaxHeapify(arr,size,l);
  MaxHeapify(arr,size,r);

  if(l<=lt && arr[l]>max3)
   { max3=arr[l]; max_i=l;}
  
  if(r<=lt && arr[r]> max3)
   { max3=arr[r]; max_i=r;}

  if(!(max_i==ind))
   {
      ull temp=arr[max_i];
      arr[max_i]=arr[ind];
      arr[ind]=temp;
      MaxHeapify(arr,size,max_i);
   }

}


void HeapSort(ull arr[],ull size)
{
   MaxHeapify(arr,size,0);
   
   for(int i=size-1;i>=1;i--)
   {
     ull temp=arr[i];
     arr[i]=arr[0];
     arr[0]=temp;

     MaxHeapify(arr,i,0);

     loop(j,0,size)
      { out(arr[j]); printf(" ");}
     br;
   }  
}

int main()
{
  ull n;
  ull arr[100000];
  in(n);

  loop(i,0,n)
  in(arr[i]);
   
  HeapSort(arr,n);
  
  loop(i,0,n)
   { out(arr[i]); printf(" ");}

   br;
}

