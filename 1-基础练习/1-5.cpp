#include<iostream>

using namespace std;

int main(){
	int n,a;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cin>>a;
	
	for(int i=0;i<n;i++){
		if(a==arr[i]){
			cout<<i+1;
			break;
		}else{
			if(i==n-1){
				cout<<-1;
			}
		}
	}
	
	return 0;
}
