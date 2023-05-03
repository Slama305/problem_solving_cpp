// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x,c=0;cin>>x;
	int arr[x];
	for(int i=0 ;i<x ;i++){
		cin>>arr[i];
	}
	for(int t=0 ;t<x ;t++){
	for(int j=t+1;j<x ;j++){	
	   if(arr[j]<arr[t]){
	   	c=arr[t];
	   	arr[t]=arr[j];
	   	arr[j]=c;
	   }	
	}
}
for(int l=0 ;l<x ;l++){
	cout<<arr[l]<<" ";
}
	return 0;
}