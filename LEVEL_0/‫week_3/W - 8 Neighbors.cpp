// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int r,c;cin>>r>>c;
	char arr[101][101];
	for(int i=1;i<=r;i++){
		for(int j=1;j<=c;j++){
			cin>>arr[i][j];
		}
	}
	int p,q;cin>>p>>q;
	if(arr[p][q-1]!='.'&&
    	arr[p-1][q-1]!='.'&&
		arr[p+1][q-1]!='.'&&
		arr[p-1][q]!='.'&&
		arr[p+1][q]!='.'&&
		arr[p-1][q+1]!='.'&&
		arr[p][q+1]!='.'&&
		arr[p+1][q+1]!='.'){
			cout<<"yes";
		}
	else {
		cout<<"no";
	}
	
	return 0;
}