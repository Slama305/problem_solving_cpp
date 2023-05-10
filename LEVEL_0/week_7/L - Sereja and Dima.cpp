// slama
#include<bits/stdc++.h>
using namespace std;
int main() 
{
	int s;
	cin>>s;
	int arr[s];
	for(int i=0;i<s;i++){
		cin>>arr[i];
	}
	int start = 0,end = s-1,r1=0,r2=0,max=0,play = 0;
	while(start<=end){
		if(arr[start] >= arr[end]){
			max = arr[start];
			start++;
		} else {
			max = arr[end];	
			end--;
		}
		if(play % 2 == 0){
			r1+=max;
		} else {
			r2+=max;
		}
		play++;
	}
	cout<<r1<<" "<<r2<<endl;
}