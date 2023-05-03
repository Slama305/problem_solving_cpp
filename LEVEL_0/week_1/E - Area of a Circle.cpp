// by Slama
#include <iostream>
#include<iomanip>
using namespace std;
int main(int argc, char** argv) {
	double r ,p=3.141592653;
	cin>>r;
	double area = p*r*r;
	cout<<fixed<<setprecision(9);
	if(r>=1 && r<=100)
	  cout<<area;
	return 0;
}