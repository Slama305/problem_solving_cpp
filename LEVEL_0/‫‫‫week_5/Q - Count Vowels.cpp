// by Slama
#include <bits/stdc++.h>
using namespace std;
void slama(){
//	#ifndef ONLINE_JUDGE
	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
//	freopen("input.txt","r",stdin),
// freopen("output.txt","w",stdout);
//	#endif  
	
}
int fun(string s){
	int c=0;
	for(int i=0;i<s.size();i++){
		if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||
		s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
			c++;
		}
	}
	return c;
}
int main(int argc, char** argv) {
	slama();
	int t=1;
	//cin>>t;
	while(t--){
	string m;getline(cin,m);
	cout<<fun(m);
	}
	return 0;
}