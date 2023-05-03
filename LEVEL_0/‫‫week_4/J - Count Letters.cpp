// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	    string s;cin>>s;
	    int c=1;
	    int i=0;
	    sort(s.begin(),s.end());
	    for(;i<s.size();i++){
	       for(int j=i+1;j<s.size();j++){
	    	  if(s[i]==s[j]){
	    	  	c++;
	    	  	i++;
			  }
		   }
		   cout<<s[i]<<" : "<<c<<endl;
		   c=1;	
		}
	return 0;
}   