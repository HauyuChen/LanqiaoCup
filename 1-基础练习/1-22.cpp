#include<iostream>
using namespace std;

void FJ(int n){
	static char c = 'A';
	if(n==1){
		printf("A");
	}else{
		FJ(n-1);
		printf("%c",c+n-1);
		FJ(n-1);
	}
	
}

int main(){
	int n;
	cin>>n;
	
	FJ(n);
	
	return 0;
}
