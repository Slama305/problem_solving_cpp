// by Slama
#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x;
	int e=0 ,o=0 , p=0,n=0;
	cin>>x;
	int arr[x] ;
	for(int i=0 ; i<x ;i++){
		cin>>arr[i];	
	}
	for(int j= 0;j<x;j++){
	   if(arr[j]%2==0){
	    e++;
	   }
	   else if(arr[j]%2!=0){
	   	o++;
	   }
	   else if(arr[j]>0){	
	   	p++;	
	   }
	   else if(arr[j]<0){	
	   	n++;
	   }
}
    cout<<"Even: "<<e<<"\n"; 
	cout<<"Odd: "<<o<<"\n"; 
     for(int t= 0;t<x;t++){
	   if(arr[t]>0){
	   	
	   	p++;
	   	
	   }
	   else if(arr[t]<0){
	   	
	   	n++;
	   }
}	
	cout<<"Positive: "<<p<<"\n"; 
	cout<<"Negative: "<<n<<"\n"; 
	return 0;
}