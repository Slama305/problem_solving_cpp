// by Slama
#include <iostream>
using namespace std; 
int main(int argc, char** argv) {
	int a,b,c;
	char x,y;
	cin>>a>>x>>b>>y>>c;
	switch(x){
		case '+' :
			if(a+b==c){
				cout<<"Yes";
			}
		else
		    cout<<a+b;
		break;
		case '-' :
			if(a-b==c){
				cout<<"Yes";
			}
		else
		    cout<<a-b;
		break;
		case '*' :
			if(a*b==c){
				cout<<"Yes";
			}
		else
		    cout<<a*b;
		break;
			
	}
	return 0;
}