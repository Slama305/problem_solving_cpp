// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x;cin>>x;
	long long arr[x];
	for( int i=0 ; i<x;i++){
		cin>>arr[i];
	}
	for(int i=0 ;i<x/2;i++){
	  if(arr[i]!=arr[x-i-1]){
	  	cout<<"NO";
	  	return 0;
	  } 
	}
	  	cout<<"YES";
	return 0;
}