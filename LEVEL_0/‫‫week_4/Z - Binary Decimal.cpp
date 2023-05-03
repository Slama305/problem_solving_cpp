// by Slama
#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		int x=s.size();
		char c='0';
		for(int i=0;i<x;i++){
			if(s[i]>c)
			   {
				c=s[i];
				}		
		} 
		if(c=='0'){
			cout<<1;
		}
		else
	   	cout<<c<<endl;
	}
	return 0;
}