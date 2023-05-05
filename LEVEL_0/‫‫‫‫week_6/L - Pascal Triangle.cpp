// by Slama
#include<bits/stdc++.h>
using namespace std;
int main() {
	long long line;
	cin>>line;
	int value;
	for(int i=0;i<line;i++){ 
		value = 1;
		for(int z =0;z<=i;z++){ 
			cout<<value<<" ";
			value = value * (i - z) / (z + 1); 
		}
		cout<<endl;
	}
}