//by Slama
#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int x;
	cin>>x;
	for(int i=1 ; i<=x ; i++){
		 if(i%2==0){
	    	cout<<i<<"\n";
	    }	    
	}
	if(x==1||x==0||x==-1){
		cout<<-1;
	}
	return 0;
}