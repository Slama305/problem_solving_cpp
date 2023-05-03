// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x;cin>>x;
	int arr[x];
	for(int i=1 ;i<=x ;i++){
		cin>>arr[i];
	}
	int c=arr[1] ,z=1;
	for(int j=1;j<=x ;j++){
	   if(arr[j]<c){
	   	 c=arr[j];
	   	 z=j;
	   } 
	}
	cout<<c<<" "<<z;
	return 0;
}