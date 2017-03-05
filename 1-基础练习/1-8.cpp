#include<iostream>
using namespace std;

int main(){
	int n1,n2,n3,n4;
	for(int i=1000;i<=9999;i++){
		n1 = i/1000;
		n4 = i%10;
		if(n1==n4){
			n2 = (i%1000)/100;
			n3 = (i%100)/10;
			if(n2==n3){
				cout<<i<<endl;
			}
		}
	}
	
	return 0;
}
