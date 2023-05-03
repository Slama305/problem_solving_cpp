// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x; cin>>x;
	int y=x;
	int arr[x][y];
	long long s1=0,s2=0;
	for(int i=0;i<x;i++){
	   for(int j=0;j<y;j++){
		  cin>>arr[i][j];
		  if(i==j){
		  	s1+=arr[i][j];
		  }
		  if(j==y-i-1){
		  	s2+=arr[i][j];
		  }
	   }	
	}
int z=s1-s2;
	cout<<abs(z);
	return 0;
}