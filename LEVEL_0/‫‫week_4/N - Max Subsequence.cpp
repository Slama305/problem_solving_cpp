// by Slama
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x;cin>>x;
	string s;cin>>s;
	int c=x;
	for(int i=0;i<x;i++){
		if(i+1<x){
			if(s[i]==s[i+1]){
				c--;
			}
		}
	}
	cout<<c;
/*	int i=0;
	int j=i+1;
	for( ;i<x;i++){
	   for( ;j<x;j++){
		  if(s[i]!=s[j]){
		  	 c++;
		  	 j++;
		  	 break;
		  }
		  j++;
    	}
    }
	cout<<c;*/
	return 0;
}