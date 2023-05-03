// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	string s,t;
	cin>>s;
	cin>>t;
	cout<<s.size()<<" "<<t.size()<<endl;
	cout<<s<<t<<endl;
	char z=s[0],y=t[0];
	     t[0]=z;s[0]=y;
	     cout<<s<<" "<<t;
	return 0;
}