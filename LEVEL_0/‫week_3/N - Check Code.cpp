// by Slama
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	short int a,b;
	cin>>a>>b;
	int n=a+b+1;
	string code;
	cin>>code; 
	if(n!=code.size()){
		cout<<"No"<<endl;
		return 0;
	}
	else if(code[a]!='-'){
			cout<<"No"<<endl;
	    	return 0;
	}
	int c=0;
	for(int i=0;i<code.size();i++){
		if(code[i]<=57&&code[i]>=48&&i!=a){
			c++;
		}
	}
	if(c==n-1){
		cout<<"Yes"<<endl;
	}
	else{
		cout<<"No"<<endl;
	}
	return 0;
}