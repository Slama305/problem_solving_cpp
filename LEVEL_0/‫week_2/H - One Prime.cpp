// by Slama
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	int x ;
	cin>>x;
   for( int i=2 ;i<=sqrt(x) ; i++){
	if(x%i==0){
		cout<<"NO"<<endl;
		return 0;
	  }
	}	
	cout<<"YES";
	return 0;
}