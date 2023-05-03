// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int x,y,a,b;
	cin>>x>>y>>a>>b;
	if(max(x,a)<=min(y,b))
	  cout<<max(x,a)<<" "<<min(y,b);
	else
	   cout<<"-1";
	return 0;
}