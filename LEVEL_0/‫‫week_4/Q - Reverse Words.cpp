// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	string s;
	string t[100001];
	int c=0;
	while(cin>>s){
		reverse(s.begin(),s.end());
		t[c]=s;
		c++;
	}
	for(int i=0;i<c;i++){
		cout<<t[i];
     	if(i<c-1)
		   cout<<" ";
	}
	return 0;
}