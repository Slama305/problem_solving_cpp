// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;
	cin>>x;
	string s;
	cin>>s;
	int sum=0;
	for(int i=0 ;i<x ;i++){
		sum+=(int)(s[i]-'0');
	}
	cout<<sum;
	return 0;
}