// by slama
#include <bits/stdc++.h>
using namespace std;
void slama(){
	#define ll long long
//	#ifndef ONLINE_JUDGE
	ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
//	freopen("input.txt","r",stdin),
//	freopen("output.txt","w",stdout);
//	#endif  	
}
ll counter=0;
ll lastnum;
ll sze=10;
long long sum(long long arr[]);
int main()
{ 
 //  int size ;
	cin>>sze;
	cin>>lastnum;
	long long arr[sze];
	for(int i=0;i<sze;i++){
		cin>>arr[i];
	}
	cout<<sum(arr);
}
long long sum(long long arr[]){ 
	// 5 3
	// 0 1 2 3  4
	// 1 8 2 10 3
//	ll x=sze;
	if(counter == lastnum){
		return 0;
	}
	// 3 + 10 + 2
	counter++;
	return arr[--sze] + sum(arr); // 4 3 2
}