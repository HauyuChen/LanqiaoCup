#include<iostream>
using namespace std;

int main(){
	int N;
	int flag=0;
	int count = 0;
	cin>>N;
	string a;
	cin>>a;

	int len = N-1;
	for(int i=0;i<len;i++){
		for(int j=len;j>=i;j--){
			if(i==j){
				if(flag==1||N%2==0){
					cout<<"Impossible";
					return 0;
				}
				flag=1;
				count += N/2-i;
			}
			else if(a[i]==a[j]){
				for(int k=j;k<len;k++){
					swap(a[k],a[k+1]);
					count++;
				} 
				len--;
				break;
				
			}
		}
	}
	cout<<count;
	
	return 0;
} 
