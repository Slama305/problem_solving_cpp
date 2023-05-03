// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int n;
	cin>>n;
	int y=n/365;
	cout<<y<<" years"<<endl;
	int m=(n-(y*365))/30;
	cout<<m<<" months"<<endl;
	int d=(n-((m*30)+(y*365)))/1;
	cout<<d<<" days"<<endl;	
	return 0;
}

