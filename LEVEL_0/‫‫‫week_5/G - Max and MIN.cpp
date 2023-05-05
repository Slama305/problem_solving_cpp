// by Slama
#include <iostream>
using namespace std;
void  mn_mx(int p){
	int ar[p];
		for(int i=0;i<p;i++){
		cin>>ar[i];
	}
	int x=ar[0];
	int m=ar[0];
	for(int i=0;i<p;i++){
		if(ar[i]<=x){
			x=ar[i];
		}
		else if(m<=ar[i]){
			m=ar[i];
		}
	}
	cout<<x<<" "<<m;
}
int main(int argc, char** argv) {
	int b;cin>>b;
	mn_mx(b);
	return 0;
}