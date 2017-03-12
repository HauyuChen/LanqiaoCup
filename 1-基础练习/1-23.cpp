#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n][n];
	int r[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			if(i!=j){
				if(a[i][j]==1&&a[j][i]==1){
					r[i] = 1;
					r[j] = 1;
				}
				if(a[i][j]==1&&a[j][i]==0){
					r[i] = 0;
				}
			}
		}
	}
	
	for(int i=0;i<n;i++){
		if(r[i]==1){
			cout<<i+1<<" ";
		}
	}
	
	return 0;
}
