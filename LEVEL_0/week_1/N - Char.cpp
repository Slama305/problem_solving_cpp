// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	char X;
	cin>>X;
	if(X>=65 && X<=90){
		X=X+32;
		cout<<X;
	}
		else if(X>=97 && X<=122){
			X=X-32;
		cout<<X;
	}
	return 0;
}