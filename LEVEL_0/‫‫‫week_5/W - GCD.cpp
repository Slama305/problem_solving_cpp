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
void fun(ll a,ll b){
	ll x=__gcd(a,b);
	ll y=(a/x)*b;
	cout<<x<<" "<<y;
}
int main(int argc, char** argv) {
	slama();
	int t=1;
	//cin>>t;
	while(t--){
	ll n,m;
	cin>>n>>m;
	fun(n,m);
	}
	return 0;
}