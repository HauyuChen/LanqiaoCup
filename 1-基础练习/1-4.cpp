#include<iostream>

using namespace std;

int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int min=a[0],max=a[0],sum=a[0];
	for(int i=1;i<n;i++){
		min = min<a[i]?min:a[i];
		max = max>a[i]?max:a[i];
		sum+=a[i];
	}
	cout<<max<<"\n";
	cout<<min<<"\n";
	cout<<sum;
	
	return 0;
}
