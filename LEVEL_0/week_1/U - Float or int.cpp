// by slama
#include <iostream>
#include <iomanip>
using namespace std;
int main(int argc, char** argv) {
	float x;
	cin>>x;
	if(x == (int)x){
		cout<<"int "<<x;
	} 
	else 
	cout<<"float "<<int(x)<<" "<<setprecision(4)<<(x-int(x));
	return 0;
}