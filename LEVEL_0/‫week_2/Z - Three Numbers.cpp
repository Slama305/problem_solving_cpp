// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int k,s;
	cin>>k>>s;
	int c=0;
	for(int i=0 ;i<=k ; i++){
		for(int j=0 ;j<=k ;j++){
			if(s-i-j>=0 &&s-i-j<=k)
			c+=1;	
		}
	}	
	cout<<c;
	return 0;
}