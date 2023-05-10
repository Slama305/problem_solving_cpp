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
int arr1[100][100],arr2[100][100],res[100][100];
void rec(int r ,int c ,int x ,int y){
//	ll sum_arr[r][c]={0};
	if(r==x&&c==y){
	 for(int i=0;i<x;i++){for(int j=0;j<y;j++){cout<<res[i][j]<<" ";}nl}
     	return;  
	}
	if(c!=y){
		res[r][c] = arr1[r][c]+arr2[r][c];
      rec( r , c+1 ,x,y);
	}
	else{
	   rec( r+1 , 0 ,x,y);	
	}
}
void solve(){//code solve ?
   int t=1;
	//cin>>t;
	while(t--){// test case ?
    cini2(n,m);
    for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>arr1[i][j];}}
    for(int i=0;i<n;i++){for(int j=0;j<m;j++){cin>>arr2[i][j];}}
    rec(0,0 ,n ,m);
 }
}                
/////////////////////////////////////////////////////////////////////////   
int main(int argc, char** argv) {
	slama();
	solve();
	return 0;
}
