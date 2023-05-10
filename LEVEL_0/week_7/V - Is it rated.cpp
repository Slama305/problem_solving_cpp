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
#define sp(x) setprecision(x)
#define u_ll unsigned long long
#define u_int unsigned int
#define sz(s) s.size()
#define for0(i,y,x) for(int i=y;i<x;i++)
#define for_(i,x,y) for(int i=x;i>=y;i--)
/*_________scan___________*/
#define cini(x) int x;cin>>x;
#define cinf(x) float x;cin>>x;
#define cins(x) string x;cin>>x;
#define cinc(x) char x;cin>>x;
#define cind(x) double x;cin>>x;
#define cinl(x) long long x;cin>>x;
#define cinl2(x,y) long long x,y;cin>>x>>y;
#define cin_arr[x] int arr[x];for(int i=0;i<x;i++)cin>>arr[i];
#define cin_arr[x][y] int arr[x][y];for(int i=0;i<x;i++){for(int j=0;j<x;j++)cin>>arr[i][j];}
/*_________print___________*/
#define pr1(x) cout<<x
#define pr2(x,y) cout<<x<<" "<<y
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
void solve(){//code solve ?
   int t=1;
	//cin>>t;
	while(t--){// test case ?
      cini(n)
      int ch=0;
      int flag=0;
      for(int i=0 ;i<n ;i++){
      	cinl2(n1 , n2)
      	if(n1!=n2){
      		flag=1;
      		break;
			}
			if(ch<n1 && i!=0 ){
				flag=2;
			}
			ch=n1;
		}
      if(flag==1)cout<<"rated\n";
      else if(flag==2)cout<<"unrated\n";
      else cout<<"maybe\n";
	}
}
int main(int argc, char** argv) {
	slama();
	solve();
	return 0;
}
