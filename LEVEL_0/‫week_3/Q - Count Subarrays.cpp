// by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int main(int argc, char** argv) {
	int t;cin>>t;
	
 
	while(t--){
                int c=0;
		int x;cin>>x;
		int arr[x];
 
		for(int i=0;i<x;i++){
			cin>>arr[i];
		}
		for(int i=0;i<x;i++){c++;
		for(int j=i+1;j<x;j++){
				if(arr[j]>=arr[j-1]){
					c++;
				}
				else{
					break;
				}
			}
		}
		cout<<c<<endl;
		
	}
	return 0;
}