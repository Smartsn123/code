#include<bits/stdc++.h>
using namespace std;

int main()
{
   int t;
    scanf("%d",&t);
   int k=0;
   while(k<t)
   {   
	string s;
	cin>>s;
if(s.length()==1)
	{
 
	cout<<min(s[0]-'0',9-(s[0]-'0'))<<endl;
	}
long long sum=0;
	for(int i=0;i<s.length();i++)
	{	
		sum+=s[i]-'0';
	}
long long int r=sum%9;
	if(sum>=9)
	cout<<min(r,9-r)<<endl;
	else
	cout<<(9-r)<<endl;
	
        k++;
   }
  return 0;
   
}
