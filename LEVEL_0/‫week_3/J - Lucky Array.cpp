// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x;cin>>x;
	long long arr[x];
        int mn=INT_MAX;
	for(int i=0 ;i<x ;i++){
		cin>>arr[i];
          if(arr[i]<mn){
           mn=arr[i];
}
}
	long long s=0;  
    for(int i=0 ;i<x ;i++){
		if(arr[i]==mn){
			s++;
		} 
	}
	if(s%2!=0){
		cout<<"Lucky";
	}
	else{
	   cout<<"Unlucky";
} 
	return 0;
}