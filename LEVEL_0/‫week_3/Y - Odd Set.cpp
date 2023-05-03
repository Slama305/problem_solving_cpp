// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		int arr[n*2];
		int ev=0,od=0;
		for(int i=0;i<n*2;i++){
		  cin>>arr[i];
		  if(arr[i]%2==0){
		  	ev++;
		  }
		  else{
		  	od++;
		  }
		}
		if(ev==od){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}