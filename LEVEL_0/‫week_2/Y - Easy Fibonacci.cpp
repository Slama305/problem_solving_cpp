// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int n;
	int x=0 ,t1=0 ,t2=1;
	cin>>n;
    for(int i=1 ;i<=n ;i++){
    	
    	if(i==1){
    		cout<<t1<<" ";
    		continue;
		}
		if(i==2){
		   
			cout<<t2<<" ";
			continue;
		}
		x=t1+t2;
		t1=t2;
		t2=x;
		cout<<x<<" ";
	}
	return 0;
}