// by Slama
#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s;cin>>s;
	for(int i=0;i<s.size()/2;i++){
		if(s[i]!=s[s.size()-i-1]){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	return 0;
}