// by Slama
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
    int a,b,c;
    cin>>a>>b>>c;
	int arr[3] = {a,b,c};
	int max =arr[0];
	int min =arr[0];
	for(int i=0;i<3;i++){
	   if(min>arr[i])
	   min=arr[i];
	   else if(max<arr[i])
	        max=arr[i]; 
	}
	cout<<min<<" "<<max;
	return 0;
}