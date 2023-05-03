// by slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
    string key="PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string org="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int x;cin>>x;
    string s;cin>>s;
    if(x==1){
    	for(int i=0;i<s.size();i++){
    		char t=s[i];
    		int s=org.find(t);
    		cout<<key[s];	
		}
	}
	if(x==2){
    	for(int i=0;i<s.size();i++){
    		char t=s[i];
    		int s=key.find(t);
    		cout<<org[s];	
		}
	}
	return 0;
}