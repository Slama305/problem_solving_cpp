// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int num(int n){
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int c=0;
	for(int i=0;i<n;i++){
	   for(int j=i+1;j<n;j++){
	      if(arr[j]==arr[i]){
	      	c++;
	      	break;
			}
   	}
	}
	return n-c;
}
int main(int argc, char** argv) {
	int x;cin>>x;
	cout<<num(x);
	return 0;
}