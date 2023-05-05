// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void shift(int n,int s){
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
   int shf=s%n;
   for(int i=n-shf;i<n;i++){
   	cout<<arr[i]<<" ";
	}
	for(int i=0;i<n-shf;i++){
   	cout<<arr[i]<<" ";
	}
}
int main(int argc, char** argv) {
	int x,y;cin>>x>>y;
	shift(x,y);
	return 0;
}