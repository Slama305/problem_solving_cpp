// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		long long  c=0,x;cin>>x;
		int arr[x];
	    for(int i=0;i<x;i++){
	    	cin>>arr[i];
	    	c+=arr[i];
		}
		//cout<<c;
		int p=0;
		if(c==x){
		   cout<<0<<endl;
		}
		else if(c>x){
		  p=c-x;
		  cout<<p<<endl;	
		}
		else if(c<x){
		  cout<<1<<endl;	
		}	
	}
	return 0;
}