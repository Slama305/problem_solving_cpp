// by Slama
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int t;cin>>t;
	while(t--){
		int c1=0,c2=0;
		int n;cin>>n;
		char s[n];
			
		for(int i=0;i<n;i++){
			cin>>s[i];
			if(s[i]=='0'){
				c1++;
			}
			else{
				c2++;
			}
		}
		if(c1==c2)cout<<"E"<<endl;
		else if(c1>c2){
			c1=c1-c2;
			while(true){
			if(c1==1){
				cout<<"S"<<endl;
				break;
			}
			else if(c1==2){
				cout<<"W"<<endl;
				break;
			}
			else if(c1==3){
				cout<<"N"<<endl;
				break;
			}
			else if(c1==4){
				cout<<"E"<<endl;
				break;
			}
		  c1=c1-4;
	}
		}
		else if(c2>c1){
			c2=c2-c1;
			while(true){
			if(c2==1){
				cout<<"N"<<endl;
				break;
			}
			else if(c2==2){
				cout<<"W"<<endl;
				break;
			}
			else if(c2==3){
				cout<<"S"<<endl;
				break;
			}
			else if(c2==4){
				cout<<"E"<<endl;
				break;
			}
		  c2=c2-4;
	}
  }		
}
	return 0;
}