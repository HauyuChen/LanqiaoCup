#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(const int &a,const int &b){

	return a>b;
	
}

int main(){
	int a[3];
	for(int i=0;i<3;i++){
		cin>>a[i];
	}
	sort(a,a+3,cmp);
	for(int i=0;i<3;i++){
		cout<<a[i]<<" ";
	}
	return 0;
}
