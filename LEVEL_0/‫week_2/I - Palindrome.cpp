// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int x ,r=0;
	cin>>x;
	int p=x;
	while(p!=0){
		r=(r*10)+(p%10);
		p =p/10;
	}
	if(r==x){
	  cout<<r<<"\nYES";	
	}
	else
      cout<<r<<"\nNO";	
		
	return 0;
}