#include<iostream>
using namespace std;


int main(){
	int m,n;
	int count= 0;
	cin>>m>>n;
	int a[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int i=0,j=0;
	while(count<m*n){
		while(i<=m-1&&a[i][j]!=-1){
			cout<<a[i][j]<<" ";
			a[i][j] = -1;
			i++;
			count++;
		}
		i--;
		j++;
		
		while(j<=n-1&&a[i][j]!=-1){
			cout<<a[i][j]<<" ";
			a[i][j] = -1;
			j++;
			count++;
		}
		j--;
		i--;
		
		while(i>=0&&a[i][j]!=-1){
			cout<<a[i][j]<<" ";
			a[i][j] = -1;
			i--;
			count++;
		}
		i++;
		j--;
		
		while(j>=0&&a[i][j]!=-1){
			cout<<a[i][j]<<" ";
			a[i][j] = -1;
			j--;
			count++;
		}
		i++;
		j++;
	}
	
	
	return 0;
}
