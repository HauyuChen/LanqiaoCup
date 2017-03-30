#include<iostream>
using namespace std;

int CompactIntegers(int a[],int n){
	int index=0;
	int i=0;
	
	while(i<n){
		while(a[i]==0&&i<n){
			i++;
		}
		if(i<n){
			a[index++] = a[i++];
		}
	
	}

	cout<<index<<endl;
	for(int j=0;j<index;j++){
		cout<<a[j]<<" ";
	}
	return index;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	
	CompactIntegers(a,n);
	
	return 0;
}
