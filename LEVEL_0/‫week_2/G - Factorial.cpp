// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int x;
	cin>>x;
	while(x--){
		long long n,m=1;
		cin>>n;
		for(int i=1 ;i<=n ; i++){
			m*=i;
		}
		cout<<m<<"\n";
	}
	return 0;
}