#include<iostream>
using namespace std;

void huff(int a[],int n,int w){
	int min1index,min2index;
	int min1=a[0];
	for(int i=0;i<n;i++){
		if(min1>=a[i]){
			min1=a[i];
			min1index = i;
			
		}
	}
	a[min1index] = a[n-1];
	n--;
			
	int min2=a[0];
	for(int i=0;i<n;i++){
		if(min2>=a[i]){
			min2=a[i];
			min2index = i;
		}
	}
	a[min2index] = a[n-1];
	n--;
	
	a[n] = min1 + min2;
	w += a[n];
	n++;
	
	if(n!=1){
		huff(a,n,w);
	}
	else{
		cout<<w;
	}
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	huff(a,n,0);
	
	return 0;
} 
