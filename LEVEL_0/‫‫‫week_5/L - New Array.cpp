// by Slama
#include <iostream>
using namespace std;
void new_arr(int n){
	int arr1[n];
	int arr2[n];
	for(int i=0;i<n;i++){
		cin>>arr1[i];
	}
	for(int i=0;i<n;i++){
		cin>>arr2[i];
	}
	for(int i=0;i<(n);i++){
		cout<<arr2[i]<<" ";
	}
	for(int i=0;i<(n);i++){
		cout<<arr1[i]<<" ";
	}
}
int main(int argc, char** argv){
	  int x;cin>>x;
	  new_arr(x);
	return 0;
}