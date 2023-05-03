// by slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int t=1;
	for(int i=1 ;i<=n ;i++){
		for(int j=1 ; j<=3 ;j++){
				cout<<t<<" ";
			    t++;
		}
		cout<<"PUM"<<endl;
		t++;
	}	
	return 0;
}