// by Slama
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	int x;
	cin>>x;
	for(int i=2;i<=x;i++){
		int c=0;
		for(int j=2 ;j<=sqrt(i) ; ++j){
			if(i%j==0){
		   c=1;	
	   	}		
		}
		if(c==0){
			cout<<i<<" ";
		}
	}	
	return 0;
}