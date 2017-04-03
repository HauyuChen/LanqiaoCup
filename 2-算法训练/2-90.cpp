#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	if(n<=0)return 0;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}

	int cmp=a[0];
	int count = 1;
	int max=1;
	int num=a[0];
	
	for(int i=1;i<n;i++){
		if(cmp == a[i]){
			count++;
			if(max<count){
				max = count;
				num = cmp;
			}
			cmp = a[i];
			count = 1;
		}else{
			if(max<count){
				max = count;
				num = cmp;
			}
			cmp = a[i];
			count = 1;
		}
	}
	
	cout<<num;
	
	return 0;
}
