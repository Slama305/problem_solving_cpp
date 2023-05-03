// by Slama
#include <bits/stdc++.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int n,m;cin>>n>>m;
	string s;cin>>s;
	while(m--){
		string x;cin>>x;
		if(x=="pop_back"){
			s.pop_back();
		}
		else if(x=="front"){
			cout<<s.front()<<endl;
		}
		else if(x=="back"){
			cout<<s.back()<<endl;	
		}
		else if(x=="sort"){
			int l,r;cin>>l>>r;
			if(l>r){
				swap(l,r);
			}
			sort(s.begin()+l-1,s.begin()+r);
		}
		else if(x=="reverse"){
			int l,r;cin>>l>>r;
			if(l>r){
				swap(l,r);
			}
			reverse(s.begin()+l-1,s.begin()+r);
		}
		else if(x=="print"){
			int pos;cin>>pos;
			cout<<s[pos-1]<<endl;
		}
		else if(x=="substr"){
			int l,r;cin>>l>>r;
                         if(l>r){
				swap(l,r);
			}
			string a=s.substr(l-1,(r-l)+1);
			cout<<a<<endl;
		}
		else {
			char p;cin>>p;
			s.push_back(p);
		}
	}
	return 0;
}