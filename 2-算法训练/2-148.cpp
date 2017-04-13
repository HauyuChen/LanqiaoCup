#include<iostream>
using namespace std;

int gcd(int a,int b){
	while(a!=b){
		if(a>b){
			a=a-b;
		}else{
			b=b-a;
		}
	}
	return a;
}

int main(){
	int n,m;
	cin>>n>>m;
	
	cout<<n*m/gcd(n,m);
	
	return 0;
} 
