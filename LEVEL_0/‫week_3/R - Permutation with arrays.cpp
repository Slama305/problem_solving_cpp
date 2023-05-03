// by Slama

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x;cin>>x;
	int arr1[x],arr2[x];
	for(int i=0;i<x;i++){
		cin>>arr1[i];
		
	}for(int i=0;i<x;i++){
		
		cin>>arr2[i];
	}

	sort(arr1,arr1+x);
	sort(arr2,arr2+x);
	for(int i=0;i<x;i++){
		if(arr1[i]!=arr2[i]){
				cout<<"no"<<endl;
				return 0;
		}
	}
	cout<<"yes";
	return 0;
}
