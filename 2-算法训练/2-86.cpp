#include<iostream>
using namespace std;

int main(){
	int m,s,n;
	cin>>m>>s>>n;
	int a[m][s];
	int b[s][n];
	int c[m][n];
	
	for(int i=0;i<m;i++){
		for(int j=0;j<s;j++){
			cin>>a[i][j];
		}
	}
	for(int i=0;i<s;i++){
		for(int j=0;j<n;j++){
			cin>>b[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			c[i][j] = 0;
		}
	}
	
	
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			for(int k=0;k<s;k++){
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cout<<c[i][j]<<" ";
		}
		cout<<endl;
	}
	
	
	return 0;
} 
