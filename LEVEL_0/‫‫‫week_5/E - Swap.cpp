// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void swap(int x,int y){
	int tmp=x;
	    x=y;
	    y=tmp;
	    cout<<x<<" "<<y;
}
int main(int argc, char** argv) {
	int n,m;cin>>n>>m;
	swap(n,m);
	return 0;
}