// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;cin>>x;
	int arr[x];
	for(int i=0 ;i<x ;i++){
		cin>>arr[i];
	}for(int j=0 ;j<x ;j++){
		if(arr[j]<=10){
			cout<<"A["<<j<<"] = "<<arr[j]<<endl;
		}
	}
	return 0;
}