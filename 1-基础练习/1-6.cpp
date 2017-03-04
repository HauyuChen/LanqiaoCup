#include<iostream>

using namespace std;

#define N 40

int main(){
	int n;
	int arr[N][N];
	cin>>n;
	
	for(int i=0;i<n;i++){
		arr[i][0]=arr[i][i]=1;
		for(int j=1;j<i;j++){
			arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
