// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x,y;cin>>x>>y;
	long long arr[x][y];
	for(int i=0;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>arr[i][j];	
		}
	}
	for(int i=0;i<x;i++){
		for(int j=y-1;j>=0;j--){
			cout<<arr[i][j]<<" ";	
		}
		cout<<endl;
	}
	return 0;
}