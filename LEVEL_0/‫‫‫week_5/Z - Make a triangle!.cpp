// by Slama
#include <bits/stdc++.h>
#define ll long long
#define nl "\n"
#define s  " "
using namespace std;
void slama(){
//	#ifndef ONLINE_JUDGE
	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
//	freopen("input.txt","r",stdin),
//	freopen("output.txt","w",stdout);
//	#endif  	
}
void fun(){
	int a,b,c;cin>>a>>b>>c;
	int x=max(a,b);
	int z=max(x,c);
	if(a==z&&(b+c)<=a){
		cout<<(a-(b+c))+1;
	}
	else if(b==z&&(a+c)<=b){
		cout<<(b-(a+c))+1;
	}
	else if(c==z&&(a+b)<=c){
		cout<<(c-(a+b))+1;
	}
	else {
	   cout<<0;
	}
}
int main(int argc, char** argv) {
	slama();
	int t=1;
	//cin>>t;
	while(t--){
	 fun();
	}
	return 0;
} 
