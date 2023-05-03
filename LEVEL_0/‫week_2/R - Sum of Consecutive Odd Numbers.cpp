// by Slama
#include <iostream>
using namespace std; 
int main(int argc, char** argv) {
	int n ,sum=0;
	cin>>n;
	for(int i=0 ;i<n ;i++){
		int x ,y;
		cin>>x>>y;
		for(int j=min(x,y)+1 ; j<max(x,y) ;j++){
			if(j%2 !=0){
			  sum+=j;
			 
			}
			else if (x==y+1 || y==x+1){
				sum=0;
			}	   
		}
		cout<<sum<<endl;
		sum=0;
	}
	return 0;
}
