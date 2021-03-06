#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define cin(n) scanf("%d",&n)
#define gc getchar_unlocked
typedef vector<long long> VI;
long long fcin(){register long long c = gc();long long x = 0;for(;(c<48 || c>57);c = gc());for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}return x;}
vector<VI> arr;
VI subtree,val;
int mod = (int) 1e9 + 7;
long long dfs(long long x,long long p)
{
	long long size=0,sos=0,temp;
	for(long long i=0;i<arr[x].size();i++){
		if(arr[x][i]==p)continue;
		else {
			size+=(temp=dfs(arr[x][i],x));
			sos+=(temp*temp)%mod; 
		}
	}
	val[x] = (size*size+2*size-sos+ 1)%mod ;
	return subtree[x] = size+1; 
}
int main(){
	long long tests=fcin();
	while(tests--){
		long long n,u,v;
		n=fcin();
		arr.clear(); 
		arr.resize(n);
		subtree.resize(n);
		val.resize(n);
		for(long long i=0;i<n-1;i++){
			u=fcin()-1;v=fcin()-1;
			arr[v].pb(u);
			arr[u].pb(v);
		}
		dfs(0,-1);
		long long ans=0; 
		for(long long i=0;i<n;i++){
			ans+= (1+i)* 1LL*(val[i]) ;
			ans%=mod;
		}printf("%lld\n",ans);
	}
} 
