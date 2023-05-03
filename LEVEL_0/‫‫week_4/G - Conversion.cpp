// by Slama
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s;
	getline(cin,s);
	for(int i=0;i<s.size();i++){
		if(s[i]==','){
			s[i]=32;
		}
		else if(s[i]>=65&&s[i]<97){
			s[i]+=32;
		}
		else{
			s[i]-=32;
		}
		cout<<s[i];
	}
	return 0;
}