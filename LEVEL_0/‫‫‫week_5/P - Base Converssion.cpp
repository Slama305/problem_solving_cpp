// by Slama
#include <bits/stdc++.h>
using namespace std;
void slama(){
	#ifndef ONLINE_JUDGE
	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
	freopen("input.txt","r",stdin),
	freopen("output.txt","w",stdout);
	#endif  
	
}
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void binary(int x){
	   
      if(x<=0){
      	return;
		}
		else{
			binary(x/2);
		 	cout<<x%2;	
		}
}
int main(int argc, char** argv) {

	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		binary(n);
		cout<<"\n";
	}
	slama();
	return 0;
}