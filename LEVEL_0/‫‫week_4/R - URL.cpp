// by Slama
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s;getline(cin,s);
/*	string s1='username';
	string s2='pwd';
	string s3='profile';
	string s4='role';
	string s5='key';*/
	
//	int p=s.find('=');
for(int j=0;j<s.size();j++){
	if(s[j]=='='){
	if(s[j-2]=='m'){
		cout<<"username: ";
		for(int i=j+1;i<s.size();i++){
			if(s[i]!='&'){
				cout<<s[i];
				
			}
			else{
				break;
			}
		}cout<<endl;
	}
	
	else if(s[j-1]=='d'){
		cout<<"pwd: ";
		for(int i=j+1;i<s.size();i++){
			if(s[i]!='&'){
				cout<<s[i];	
			}
			else{
				break;
			}
		}
		cout<<endl;
	}

	else if(s[j-3]=='i'){
		cout<<"profile: ";
		for(int i=j+1;i<s.size();i++){
			if(s[i]!='&'){
				cout<<s[i];	
			}
			else{
				break;
			}
		}cout<<endl;
	}

	else if(s[j-3]=='o'){
		cout<<"role: ";
		for(int i=j+1;i<s.size();i++){
			if(s[i]!='&'){
				cout<<s[i];
				
			}
			else{
				break;
			}
		}cout<<endl;
	}

	else if(s[j-1]=='y'){
		cout<<"key: ";
		for(int i=j+1;i<s.size();i++){
			if(s[i]!='&'){
				cout<<s[i];
				
			}
			else{
				break;
			}
		}cout<<endl;
	}
}
}
	return 0;
}