#include<iostream>
using namespace std;


int main(){
	int n;
	cin>>n;
	
	int a[10000] = {1};
	
	for(int i=1;i<=n;i++){
		for(int j=0;j<10000;j++){
			a[j] = a[j]*i;
		}
		for(int j=0;j<10000;j++){
			if(a[j]>=9){
				a[j+1] += a[j]/10;
				a[j] = a[j]%10;
			}
		}
	}
	int k;
	for(int i=9999;i>=0;i--){
		if(a[i]!=0){
			k = i;
			break;
		}
	}
	for(int i=k;i>=0;i--){
		cout<<a[i];
	}
	
	return 0;
}
