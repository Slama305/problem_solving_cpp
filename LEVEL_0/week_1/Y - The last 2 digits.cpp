// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	long long a,b,c,d;
	cin>>a>>b>>c>>d;
		long long  x=(a%100*b%100*c%100*d%100)%100;
		if (x<10)
		    cout<<0<<x;
		else
	    	cout<<x;
	return 0;
}