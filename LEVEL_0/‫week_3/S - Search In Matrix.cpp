// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x,y;
	cin>>x>>y;
	int arr[x][y];
	for(int i=0 ;i<x;i++){
		for(int j=0;j<y;j++){
			cin>>arr[i][j];
		}
	}
	int c;cin>>c;
	for(int i=0 ;i<x;i++){
		for(int j=0;j<y;j++){
			if(arr[i][j]==c){
				cout<<"will not take number"<<endl;
				return 0;
			}
		}
	}
	cout<<"will take number"<<endl;
	return 0;
}