#include<iostream>
using namespace std;

int main(){
	int K,L;
	cin>>K>>L;
	
	long long sum=0;
	long long a[500][105];
	
	for(int i=0;i<K;i++){
		a[1][i] = 1;
	}
	for(int i=2;i<=L;i++){
		for(int x=0;x<K;x++){
			for(int y=0;y<K;y++){
				if(y!=x-1&&y!=x+1){
					a[i][x] += a[i-1][y];
					a[i][x] %= 1000000007;
				}
			}
		}
	}
	
	for(int i=1;i<K;i++){
		sum+=a[L][i];
		sum %= 1000000007;
	}
	cout<<sum;
	
	return 0;
} 
