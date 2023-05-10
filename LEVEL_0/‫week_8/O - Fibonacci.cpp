             /* بسم الله الرحمن الرحيم */
         /* لا اله الا الله محمد رسول الله  */
          /* اللهم لا سهل الا ما جعلته سهلا */
             /*________ACCEPT________*/
#include <bits/stdc++.h>
using namespace std;
#define slama() ios_base::sync_with_stdio(false),cin.tie(0),cout.tie(0);
/*______hello world_______*/
#define ll long long
#define db double
#define ft float
#define nl cout<<"\n";
#define spa cout<<" ";
#define sp(x) setprecision(x)
#define u_ll unsigned long long
#define u_int unsigned int
#define sz(s) s.size()
#define for0(i,y,x) for(int i=y;i<x;i++)
#define for_(i,x,y) for(int i=x;i>=y;i--)
/*_________scan___________*/
#define cini(x) int x;cin>>x;
#define cini2(x,y) int x,y;cin>>x>>y;
#define cinf(x) float x;cin>>x;
#define cins(x) string x;cin>>x;
#define cinc(x) char x;cin>>x;
#define cind(x) double x;cin>>x;
#define cinl(x) long long x;cin>>x;
#define cinl2(x,y) long long x,y;cin>>x>>y;
#define cin_arr(arr,x) int arr[x];for(int i=0;i<x;i++)cin>>arr[i];
#define cin_arr(arr,x,y) int arr[x][y];for(int i=0;i<x;i++){for(int j=0;j<y;j++)cin>>arr[i][j];}
/*_________print___________*/
#define pr1(x) cout<<x
#define pr2(x,y) cout<<x<<" "<<y
#define pri_arr(x) int arr[x];for(int i=0;i<x;i++)cout<<arr[i]<<" ";
/*___*****yes & no*****___*/
#define YES cout<<"YES\n"
#define Yes cout<<"Yes\n"
#define yes cout<<"yes\n"
#define NO cout<<"NO\n"
#define No cout<<"No\n"
#define no cout<<"no\n"
/*___________________________الحمد لله__________________________________*/
/*
                                                            *   *
  **            **                                         *** ***    ** **
  **            **                                          *   *     ** **
  **            **                                            ***     ** **
  **  *         **                                   *       *****    ** **
  ** ***        **               **   **  **         **     **   **   ** **
  **  *    **   **     **        **   **  **         **     **   **   ** **
  **      **   **    **         **   **  **  *      **      ** **    ** **
  **************    **         ***********  ************************** **
   ************      ********************    **************** *******  *
                      ********
  ________________________________________________________________________
  ________________________________________________________________________

     ****    ***          ***         ***        ***         ***
   *******   ***        *** ***     *** ***    *** ***     *** ***
  ***        ***       ***   ***   ***   ***  ***   ***   ***   ***
   *****     ***      ***     *** ***     ******     *** ***     ***
    ******   ***      ***     *** ***       **       *** ***     ***
       ****  ***      *********** ***                *** ***********
        ***  ***    * *********** ***                *** ***********
   *******   ******** ***     *** ***                *** ***     ***
     ****    *******  ***     *** ***                *** ***     ***
  ________________________________________________________________________
  ________________________________________________________________________
*/
ll fib[31];
void rec(int num ,int f){
		fib[1]=0;
   	fib[2]=1;
	if(f>num){
		cout<<fib[num];
		return;
	}
//	if(num==1){
//		fib[num]=0;
//	}
//	else if(num==2){
//		fib[num]=1;
//	}
		fib[f]=fib[f-1]+fib[f-2];
		rec(num,f+1);	
}
void solve(){//code solve ?
   int t=1;
	//cin>>t;
	while(t--){// test case ?
    cini(n);
    rec(n ,3);
	}
}
int main(int argc, char** argv) {
	slama();
	solve();
	return 0;
}
