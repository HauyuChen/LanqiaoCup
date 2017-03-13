#include<iostream>
using namespace std;

int main(){
	int v1,v2,t,s,l;
	cin>>v1>>v2>>t>>s>>l;
	
	int dT=0,dR=0;
	int wait = 0;
	
	int timeT = l/v2;
	for(int i=1;i<=timeT;i++){
		if(dR-dT<t&&wait==0){
			dT += v2;
			dR += v1;
		}
		else{
			if(wait<s){
				dT += v2;
				wait++;
			}
			if(wait>=s){
				wait=0;
			}
		}
		if(dT==l||dR==l){
			if(dT!=l){
				cout<<"R"<<endl;
			}
			else if(dR!=l){
				cout<<"T"<<endl;
			}
			else{
				cout<<"D"<<endl;
			}
			cout<<i;
			return 0;
		}
	}
	
	return 0;
}
