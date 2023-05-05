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
void fun(int n,int m){
	int arr1[n][m];
	int arr2[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		   cin>>arr1[i][j];
   	}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		   cin>>arr2[i][j];
		   arr2[i][j]+=arr1[i][j];
   	}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
		   cout<<arr2[i][j]<<" ";
   	}
   	cout<<"\n";
	}
}
int main(int argc, char** argv) {
	slama();
	int t=1;
	//cin>>t;
	while(t--){
	  int x,y;
	  cin>>x>>y;
	  fun(x,y);
	}
	return 0;
}