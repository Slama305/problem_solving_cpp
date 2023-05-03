// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x;cin>>x;
	long long arr[x];
	for(int i=0;i<x;i++){
		cin>>arr[i];
		if(arr[i]%2!=0){
			cout<<"0";
			return 0;
		}
	}
	int c=0,f=0;
	while(f==0){ 
	for(int i=0;i<x;i++){
		if(arr[i]%2==0){	
		arr[i]=arr[i]/2;	
		}
		else{
			f=1;
			break;
		}	
	}
	c++;
}	
    cout<<c-1;
	
	return 0;
}