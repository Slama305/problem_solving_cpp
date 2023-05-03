// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
     	char  c='*';
		int n;
		cin>>n;
    for(int i=n ; i>0 ; --i){
    	for(int j=i ;j>0 ;--j){
    		cout<<c;
		}
			cout<<endl;
	}
	return 0;
}