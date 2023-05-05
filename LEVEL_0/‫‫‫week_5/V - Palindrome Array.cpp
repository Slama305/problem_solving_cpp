// by Slama
#include <bits/stdc++.h>
using namespace std;
void slama(){
//	#ifndef ONLINE_JUDGE
	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
//	freopen("input.txt","r",stdin),
//	freopen("output.txt","w",stdout);
//	#endif  	
}
void fun(int n){
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int flag=0;
	for(int i=0;i<n/2;i++){
	   if(arr[i]!=arr[n-1-i]){
	   	flag=1;
		}
	}
	if(flag!=0){
		cout<<"NO";
	}
	else {
		cout<<"YES";
	}
}
int main(int argc, char** argv) {
	slama();
	int t=1;
	//cin>>t;
	while(t--){
	int x;cin>>x;
	fun(x);
	}
	return 0;
}