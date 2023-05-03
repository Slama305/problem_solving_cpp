// by Slama

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char** argv) {
	int x  , ma=0;
	cin>>x;
	for( int i=1; i<=x ; i++){
	   int n;
	   cin>>n;
	   if(i==1){
	   	ma =n;
	   }	
	   if(n>ma){
	   	ma=n;
	   }
	}
	cout<<ma;
	return 0;
}
