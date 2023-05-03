// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int x ,y ,m=0;
	cin>>x>>y;
	for(int i=1 ;i<=min(x,y) ;i++){
		if( x%i==0 && y%i==0){
			if(i>m){
			 m=i;	
			}	
		}	
	}
	cout<<m;
	return 0;
}