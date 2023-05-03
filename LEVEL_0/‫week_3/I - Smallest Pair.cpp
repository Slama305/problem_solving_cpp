// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int s;
	cin>>s;
	while(s--){
		int x;cin>>x;
		int arr[x+1];
		for(int i=1 ;i<=x ;i++){
			cin>>arr[i];
		}
		int mini=INT_MAX;
		for(int i=1 ;i<=x ;i++){
			for(int j=i+1 ;j<=x ;j++){
			   mini=min(mini,(arr[i]+arr[j]+j-i));  
			}
		}	
			cout<<mini<<endl;
	}
	return 0;
}