// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x;
	cin>>x;
	int arr[x];
	int mn=INT_MAX ,mx=INT_MIN;
	for(int i=0;i<x;i++){
		cin>>arr[i];
		mn=min(mn,arr[i]);
		mx=max(mx,arr[i]);	
	}
	int px,pn;
	for(int i=0;i<x ;i++){	
    	if(arr[i]==mn){
    		pn=i;
		}
		else if(arr[i]==mx){
    		px=i;
		}
	}
		int tmp=arr[pn];
	        arr[pn]=arr[px];
         	arr[px]=tmp;
	for(int i=0;i<x ;i++){	
    	cout<<arr[i]<<" ";
	}
	return 0;
}