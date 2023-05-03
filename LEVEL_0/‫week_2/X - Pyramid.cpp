// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	short n;
	cin>>n;
	for(int i=n ;i>=1 ;i--){
		for(int j=i ;j<=n ;j++){
	    	cout<<"*";
	}
	cout<<endl;
	}
	return 0;
}