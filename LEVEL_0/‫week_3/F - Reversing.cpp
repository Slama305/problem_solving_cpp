// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;cin>>x;
	long long arr[x];
	for(int i=0;i<x ;i++){
		cin>>arr[i];
	}
	
	for(int j=x-1;j>=0;j--){
	   cout<<arr[j]<<" ";
	}
	return 0;
}