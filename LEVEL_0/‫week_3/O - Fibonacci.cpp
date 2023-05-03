// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
    int x;
	cin>>x;
	long long fib[51];
	fib[1]=0;
	fib[2]=1;
	for(int i=3 ;i<=x;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
	cout<<fib[x];
	return 0;
}