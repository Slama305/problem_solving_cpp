// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void time(int x,char c){
	for(int i=0;i<x;i++){
		cout<<c<<" ";
	}
}
int main(int argc, char** argv) {
	int t ;cin>>t;
	while(t--){
		int n;
		char s;
		cin>>n>>s;
		time(n,s);
		cout<<endl;
	}
	return 0;
}