// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
bool even(int x){
	if(x%2==0)return true;
	else return false;
}
bool binry(int y){
	int mod=0;
	string s1,s2;
	while(y){
		mod=y%2;
		y=y/2;
		if(mod==0){
			s1+='0';
		}else{
		   s1+='1';	
		}
	}
	s2=s1;
	reverse(s2.begin(),s2.end());
	if(s2==s1)return true;
	else return false;
}
int main(int argc, char** argv) {
	int n;cin>>n;
	if(even(n))cout<<"NO";
	else{
		if(binry(n)){
			cout<<"YES";
		}else{
			cout<<"NO";
		}
	}
	return 0;
}