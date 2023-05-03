// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	string s;cin>>s;
	long long sum=0;
	for(int i=0;i<s.size();i++){
		sum+=int(s[i]-48);
	}
	cout<<sum;
	return 0;
}