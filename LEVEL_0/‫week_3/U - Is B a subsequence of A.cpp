// by slama
#include <bits/stdc++.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	long long c=0, x,y;
	cin>>x>>y;
	long long arr[x],arrs[y];
	for(int i=0;i<x;i++){
		cin>>arr[i];
	}
        for(int i=0;i<y;i++){
		cin>>arrs[i];
	}
	long long z=0;
	for( int j=0;j<x;j++){
			if(arr[j]==arrs[z]){
			  c++;
			  z++;
			//  break;
			}
		}
	
    if(c==y)
	 cout<<"YES";
	else
	cout<<"NO";
	return 0;
}