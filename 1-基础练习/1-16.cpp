#include<iostream>
using namespace std;

int main(){
	int a,b;
	int val;
	cin>>a>>b;
	for(int i=a;i<=b;i++){
		cout<<i<<"=";
		val = i;
		for(int j=2;j<=val;j++){
			if(val%j==0){
				cout<<j;
				val = val/j;
				if(val!=1){
					cout<<"*";
				}
				j=1;
			}
		}
		cout<<endl;
	}
	
	return 0;
}
