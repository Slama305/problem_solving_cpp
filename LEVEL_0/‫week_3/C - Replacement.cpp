// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x;cin>>x;
	long long arr[x];
	for(int i=0 ;i<x ;i++){
		cin>>arr[i];
	}
	for(int j=0 ;j<x ;j++){
		if(arr[j]>0){
			arr[j]=1;
		}
		else if(arr[j]<0){
			arr[j]=2;
		}
		cout<<arr[j]<<" ";
	}
	return 0;
}