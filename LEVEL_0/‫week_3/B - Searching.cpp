//by Slama
#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int x;
	cin>>x;
	long long arr[x];
	for(int i=0 ;i<x ;i++){
		cin>>arr[i];
	}
	int c, s=-1;
	cin>>c;
//	if(true){
	for(int j=0 ;j<x ;j++){
	if(arr[j]==c){
		s=j;
		break;
	}
}
    if(s<=x && s>-1){
	   cout<<s;
}
    else {
     cout<<"-1";
}
//}
   
	return 0;
}