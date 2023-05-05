// by Slama
#include <bits/stdc++.h>
#define ll long long 
using namespace std;
void slama(){
//	#ifndef ONLINE_JUDGE
	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
//	freopen("input.txt","r",stdin),
//	freopen("output.txt","w",stdout);
//	#endif  	
}
long long fact(long long n){
	if(n==0){
		return 1;
	}
	ll res=1;
	for(int i=2;i<=n;i++){
		res*=i;
	}
	return res;
}
void fun(long a,long b){
	cout<<(fact(a)/(fact(b)*fact(a-b)))<<" ";
	cout<<(fact(a)/fact(a-b));
}
int main(int argc, char** argv) {
	slama();
	int t=1;
	//cin>>t;
	while(t--){
	ll x,y;
	cin>>x>>y;
	fun(x,y);
	}
	return 0;
}