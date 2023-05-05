//by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void print(int x){
	for(int i=1;i<=x;i++){
		cout<<i;
		if(i<x){
			cout<<" ";
		}
	}
}
int main(int argc, char** argv) {
	int a;
	cin>>a;
	print(a);
	return 0;
}