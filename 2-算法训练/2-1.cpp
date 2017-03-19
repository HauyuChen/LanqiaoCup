#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a,int b){
	return a>b;
}

void findK(int a[],int l,int r,int k){
	int size = r-l+1;
	int b[size];
	int index=0;
	for(int i=l-1;i<r;i++){
		b[index++] = a[i];
	}
	sort(b,b+size,cmp);
	cout<<b[k-1]<<endl;
}

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int m;
	cin>>m;
	int cmp[m][3];
	for(int i=0;i<m;i++){
		cin>>cmp[i][0];
		cin>>cmp[i][1];
		cin>>cmp[i][2];
	}
	
	for(int i=0;i<m;i++){
		findK(a,cmp[i][0],cmp[i][1],cmp[i][2]);
	}
	
	return 0;
} 
