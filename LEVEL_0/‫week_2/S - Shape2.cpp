// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int x;
	cin>>x;
	int y=x;
	for(int i=1 ;i<=x ;i++){
	
		for(int j=1 ; j<y ;j++)
			cout<<" ";
			y--;
	        for(int t=1 ;t<=2*i-1 ;t++)
	        	cout<<"*";
	 	
		cout<<endl;
	}
	return 0;
}