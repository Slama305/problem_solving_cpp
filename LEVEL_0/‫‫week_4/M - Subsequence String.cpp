// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	string s;cin>>s;
	int i=0,j=0,c=0;
	string t={'h','e','l','l','o'};
	for( ;i<t.size();i++){
	   for( ;j<s.size();j++){
		  if(t[i]==s[j]){
		  	c++;
		  	j++;
		  	break;
		  }
	   }	
	}
	if(c==5){
		cout<<"YES\n";
	}
	else{
		cout<<"NO\n";
	} 
	return 0;
}