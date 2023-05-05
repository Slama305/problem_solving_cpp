// by Slama
#include<bits/stdc++.h>
using namespace std;
const int s = 500;
void swapRaw(int arr[s][s],int num1,int num2,int size){
	for(int i=0;i<size;i++){
		int temp = arr[num1][i]; 
		arr[num1][i] = arr[num2][i]; 
		arr[num2][i] = temp; 
	}
}
void swapColumn(int arr[s][s],int num1,int num2,int size){
	for(int i=0;i<size;i++){
		int temp = arr[i][num2]; 
		arr[i][num2] = arr[i][num1]; 
		arr[i][num1] = temp; 
	}
}
void print(int arr[s][s],int size){
	for(int i=0;i<size;i++){ 
		for(int z=0;z<size;z++){ 
			cout<<arr[i][z]<<" "; 
		}
		cout<<endl;
	}
}
int main()
{
	int size,num1,num2;
	cin>>size>>num1>>num2;
	int arr[s][s];
	
	for(int i=0;i<size;i++){ 
		for(int z=0;z<size;z++){ 
			cin>>arr[i][z]; 
		}
	}	
	num1--; 
	num2--; 
	swapRaw(arr,num1,num2,size);
	swapColumn(arr,num1,num2,size);
	print(arr,size);
	
}