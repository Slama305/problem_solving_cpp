// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv)
 {
 	int n;cin>>n;
 	char s[n];
 	int b=0,r=0;
 	for(int i=0;i<n;i++){
 		cin>>s[i];
 		if(s[i]=='R'){
 			r++;
		 }
		 else if(s[i]=='B'){
		 	b++;
		 }
	 }
 	if(r>b)
 	 {
 		cout<<"Real Madrid";
	 }
	 else if(r<b)
	 {
	 	cout<<"Barcelona";
	 }
	 else
	 {
	 	cout<<"Tie";
	 }	
	return 0;
}