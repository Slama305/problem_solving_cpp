// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	long long a,b;
	cin>>a>>b;
	if(a%b==0 ||b%a==0){
		cout<<"Multiples";
	}
	else
	   cout<<"No Multiples";
	return 0;
}