// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int x;
	 cin>>x;
	 while(x--){
	 	string n;
	 	cin>>n;
	 for( int i=n.size()-1 ;i>=0 ;i--){
	 	 cout<<n[i]<<" ";
	 } 	
	 	cout<<endl;
	 }
	return 0;
}