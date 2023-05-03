// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int x,y;
	char p;
	cin>>x>>p>>y;
	switch(p){
		case '>':
			if(x>y){
				cout<<"Right";
			}
			else 
			    cout<<"Wrong";
		break;
		case '<':
			if(x<y){
				cout<<"Right";
			}
			else 
			    cout<<"Wrong";
		break;
		case '=':
			if(x==y){
				cout<<"Right";
			}
			else 
			    cout<<"Wrong";
		break;
	}
	return 0;
}