// by Slama
#include <iostream>
#include <math.h>
using namespace std;
int main(int argc, char** argv) {
    int x;
    cin>>x;
    while(x--){
    	int n ,p=0;
    	cin>>n;
    	long long sum=0;
    	while(n){
    		int y =n%2;
    		n=n/2;
    		if(y==1){
    			sum+=pow(2,p);
    			p++;
			}
		}
    	cout<<sum<<endl;
	}
	return 0;
}