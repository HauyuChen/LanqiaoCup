#include<iostream>
using namespace std;

int main(){
	int N,M;
	int i,j,k;
	cin>>N>>M;
	int a[N][N];
	int b[N][N];
	int result[N][N];
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cin>>a[i][j];
			b[i][j] = a[i][j];
			result[i][j] = 0;
		}
	}
	
	if(M==0){
		for(i=0;i<N;i++){
			for(j=0;j<N;j++){
				if(i==j){
					cout<<1<<" ";
				}
				else{
					cout<<0<<" ";
				}
			}
			cout<<endl;
		}
		return 0;
	}
	
	while(M>=2){
		for(i=0;i<N;i++){
			for(k=0;k<N;k++){
				for(j=0;j<N;j++){
					result[i][k] += b[i][j]*a[j][k];
				
				}
				//cout<<result[i][k]<<" ";
			}
		//cout<<endl;
		}
		if(M>2){
			for(i=0;i<N;i++){
				for(j=0;j<N;j++){
					b[i][j]=result[i][j];
					result[i][j]=0;
				}
			}
		}
		
		M--;
	}
	
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			cout<<result[i][j]<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
