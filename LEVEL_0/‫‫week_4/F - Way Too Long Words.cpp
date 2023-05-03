// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		if(s.size()<=10){
			cout<<s<<endl;
		}
		else{
			cout<<s[0]<<s.size()-2<<s[s.size()-1]<<endl;
		}	
	}	
	return 0;
}