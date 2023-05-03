// by Slama
#include <iostream>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	string s;cin>>s;
//	int i=0;
//	int c=0;
/*	int e=s.find('e');int E=s.find('E');
	int g=s.find('g');int G=s.find('G');
	int y=s.find('y');int Y=s.find('Y');
	int p=s.find('p');int P=s.find('P');
	int t=s.find('t');int T=s.find('T');*/
	int e=0,g=0,p=0,y=0,t=0;
	for(int i=0;i<s.size();i++){
    	if(s[i]=='e'||s[i]=='E'){
	    	 e++;
		//s[i]='z';
     	}
     	else if(s[i]=='g'||s[i]=='G'){
	    	 g++;	
    	}
    	else if(s[i]=='y'||s[i]=='Y'){
     		 y++;	
    	}
     	else if(s[i]=='P'||s[i]=='p'){
	    	 p++;	
    	}
    	else if(s[i]=='T'||s[i]=='t'){
	    	 t++;
    	}
    }
        int m1=min(e,g);
        int m2=min(y,p);
        int m3=min(m1,m2);
        int cont=min(m3,t);   
            cout<<cont;	
	return 0;
}