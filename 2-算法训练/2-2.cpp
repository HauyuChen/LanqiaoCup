#include<iostream>
using namespace std;

int main(){
	long long n;
	cin>>n;
	long long r;
	
	if(n<=2){
		r = n;
	}
	else if(n%2!=0){
		r = n*(n-1)*(n-2);
	}
	else if(n%3==0){
		r = (n-1)*(n-2)*(n-3);
	}
	else{
		r = n*(n-1)*(n-3);
	}
	cout<<r;
	return 0;
}
