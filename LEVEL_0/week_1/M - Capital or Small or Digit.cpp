// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	char a ;
	cin>>a;
	if(a>=48 && a<=57)
	{
		cout<<"IS DIGIT";
	}
	else if(a>=65 && a<=90){
		cout<<"ALPHA\nIS CAPITAL";
	}
		else if(a>=97 && a<=122){
		cout<<"ALPHA\nIS SMALL";
	}
	return 0;
}