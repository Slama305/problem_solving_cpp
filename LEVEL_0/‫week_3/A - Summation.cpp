// by Slama 
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
	int x ;
	cin>>x;
	long long arr[x],c=0;
	for(int i=0 ;i<x ;i++)
    {
    	cin>>arr[i];
	}	
	for(int j=0 ; j<x ;j++){
		c+=arr[j];
	}
	if(c<0){
		c=c*-1;
	}
	cout<<c;
	
	return 0;
}