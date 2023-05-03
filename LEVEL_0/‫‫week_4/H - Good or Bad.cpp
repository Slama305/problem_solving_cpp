// by Slama
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
	int c=0;
	string s;cin>>s;
	for(int i=0 ;i<s.size();i++){
		if((i+2)<=s.size()){
	        if(s[i]!=s[i+1]&&s[i]==s[i+2]){
	        	c++;	
		    }
		}	
	}
	if(c==0){
		cout<<"Bad\n";
	}
    else cout<<"Good\n";
}
	return 0;
}