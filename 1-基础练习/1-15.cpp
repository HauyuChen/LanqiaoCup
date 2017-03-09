#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string stra;
	string strb;
	int flag = 0;
	int f=0;
	cin>>stra;
	cin>>strb;
	int lena = stra.length();
	int lenb = strb.length();
	if(lena != lenb){
		cout<<1;
	}else{
		for(int i=0;i<lena;i++){
			if((stra[i]+32) == strb[i] || (stra[i]-32) == strb[i] || stra[i]==strb[i]){
				flag++;
				if(stra[i]!=strb[i]){
					f++;
				} 
			}else{
				cout<<4;
				return 0;
			}
			
		}
		if(flag == lena && f>0){
				cout<<3;
				return 0;
		}
		cout<<2;
		return 0;
	}
	
	return 0;
}
