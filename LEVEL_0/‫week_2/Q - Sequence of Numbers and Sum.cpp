// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
  int n ,m ,sum=0;
  
  while(1){
  	cin>>n>>m;
  	if(n>0 && m>0){
	  
  	if(n>=m){
  		for(int i=m ;i<=n ;i++){
  			cout<<i<<" ";
  			sum+=i;
		  }
		  cout<<"sum ="<<sum<<endl;
		  sum=0;
		   
	}
	else if (m>=n){
		for(int i=n ;i<=m ;i++){
  			cout<<i<<" ";
  			sum+=i;
		  }
		  cout<<"sum ="<<sum<<endl;
		 sum=0;
	}
}
    else 
        break;	
  }		
	return 0;
}