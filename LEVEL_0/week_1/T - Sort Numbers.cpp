// by Slama
#include <iostream>
using namespace std;
/////////////////////////////////////
int main(){
  int arr[3] ;
	int copy[3];
	for(int t=0 ;t<3 ;t++){	
		cin>>arr[t];
    	copy[t]=arr[t];
    }
for(int i=0 ;i<3 ;i++){
	for(int j=i ; j<3 ;j++)
		if(arr[j]<arr[i]){
				int s=arr[j];
				arr[j]=arr[i];
				arr[i]=s;
			}
		}
	for(int a=0 ;a<3 ;a++){
		cout<<arr[a]<<endl;	
	}
	cout<<endl;
   	for(int k=0 ;k<3 ;k++)
    	cout<<copy[k]<<endl;
    	return 0;
}
