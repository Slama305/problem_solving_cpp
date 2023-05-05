// by Slama
#include<bits/stdc++.h>
using namespace std;
long long fact(long long num){ 
	long long counter = 1;
	long long result = 1;
	while(counter<=num){ 
		result *= counter;   
		counter++; 
	}
	return result;
}
int main() {
	long long num1,num2;
	cin>>num1>>num2;
	cout<<fact(num1)/(fact(num1 - num2) * fact(num2))<<" ";
	cout<<fact(num1)/(fact(num1 - num2));
    return 0;
}