// by Slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int x;cin>>x;
	int arr[123]={};
        for (int i=0;i<x;i++){
        char s;cin>>s;
        arr[s]++;
}
for (int i=0;i<123;i++){
        if(arr[i]!=0){
           while(arr[i]--) cout<<char(i);
}
}	
	return 0;
}