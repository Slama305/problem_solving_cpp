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
#define ull unsigned long long 
#define uint unsigned int
#define sz(s) long long(s.size())
#define for0(x) for(int i=0;i<x;i++)
#define for1(x) for(int i=1;i<=x;i++)
#define for_(x) for(int i=x;i>0;i--)
/*_________scan___________*/ 
#define cini(x) int x;cin>>x; 
#define cinf(x) flaot x;cin>>x;
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
/*_________________الحمد لله_____________________*/

void solve(){//code solve ?
   int t=1;
	//cin>>t;
	while(t--){// test case ?
    cinl2(x1,y1);
    cinl2(x2,y2);
    cinl2(x3,y3);
    ll m1=(y3-y2)*(x2-x1);
    ll m2=(y2-y1)*(x3-x2);
    if(m1==m2) YES;
    else NO;
	}
}
int main(int argc, char** argv) {
	slama();
	solve();
	return 0;
}