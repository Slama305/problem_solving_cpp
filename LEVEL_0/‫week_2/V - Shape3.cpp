// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int x;
	cin>>x;
	int y=x;
	for(int i=1 ;i<=x ;i++){
		for(int j=0 ; j<y-i ;j++)
			cout<<" ";
	        for(int t=1 ;t<=2*i-1 ;t++)
	        	cout<<"*";
		cout<<endl;
	}
	for(int i=x ;i>0 ;i--){
		for(int j=0 ; j<y-i ;j++)
			cout<<" ";
	        for(int t=1 ;t<=2*i-1 ;t++)
	        	cout<<"*";
		cout<<endl;
	}
	return 0;
}