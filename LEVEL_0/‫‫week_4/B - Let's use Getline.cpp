//by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	string s;
	getline(cin,s);
	int x=92;
	for(int i=0;i<s.size();i++){
		if(s[i]!=(char)x){
			cout<<s[i];
			//break;
		}
		else{
		    return 0;
		}
	//	cout<<s[i];
	}
	return 0;
}