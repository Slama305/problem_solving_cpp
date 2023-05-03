// by Slama
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
	double a,b;
	cin>>a>>b;
	double x=a/b;
	cout<<"floor "<<a<<" / "<<b<<" = "<<floor(x)<<endl;
	cout<<"ceil "<<a<<" / "<<b<<" = "<<ceil(x)<<endl;
	cout<<"round "<<a<<" / "<<b<<" = "<<round(x)<<endl;	
	return 0;
}