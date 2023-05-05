// by Slama
#include <iostream>
using namespace std;
void sh(int n){
	int arr[n];
	int c=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]==0){
			c++;
		}
	}
	for(int i=0;i<n;i++){
		if(arr[i]!=0){
			cout<<arr[i]<<" ";
		}
	}
	for(int i=0;i<c;i++){
			cout<<0<<" ";
	}
}
int main(int argc, char** argv) {
	int x;cin>>x;
	sh(x);
	return 0;
}