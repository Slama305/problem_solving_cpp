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
void fun(){
   int x,y;cin>>x>>y;
   for(int i=x;i<=y;i++){
   	int n=i;
   	set<int>s;
   	int c=0;
   	while(n){
   		c++;
   		s.insert(n%10);
   		n=n/10;
		}
		if(s.size()==c){
			cout<<i<<"\n";
			return ;
		}
	}
	cout<<-1<<"\n";
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