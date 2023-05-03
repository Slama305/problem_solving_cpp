// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		int x;cin>>x;
		int arr[x];
		for(int i=0;i<x;i++){
			cin>>arr[i];
		}
		for(int i=0;i<x;i++){
			cout<<arr[i]<<" ";
		}
        for(int i=0;i<x;i++){ int maxi=arr[i];
			for(int j=i+1;j<x;j++){
			    maxi=max(maxi,arr[j]);
			    cout<<maxi<<" ";
	     	}
	    }
		cout<<endl;
	}
	return 0;
}