// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		string s1,s2;
		cin>>s1>>s2;
		int x=min(s1.size(),s2.size());
		int y=max(s1.size(),s2.size());
		for(int i=0;i<x;i++){
			cout<<s1[i]<<s2[i];
		}
		for(int i=x;i<y;i++){
		   if(x==s1.size()){
		   	  cout<<s2[i];
		   }
		   else{
		   	cout<<s1[i];
		   }
		}
		cout<<"\n";
	}
	return 0;
}