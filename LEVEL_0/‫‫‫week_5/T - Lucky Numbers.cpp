// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int x,y;
	cin>>x>>y;
	bool v=false;
	for(int i=min(x,y) ;i<=max(x,y) ;i++){
		int a=i;
		bool flag=false;
		while(a>0){
			int x=a%10;
			if (x!=7&&x!=4){
				flag=true;
			}
			a/=10;
		}
		if(!flag){
			cout<<i<<" ";
			v=true;
		}
	}
	if(!v){
		cout<<-1;
	}
	return 0;
}