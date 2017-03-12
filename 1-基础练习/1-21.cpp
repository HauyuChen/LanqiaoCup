#include <iostream>
using namespace std;


void sin(int i,int n){
	if(i<=n){
		cout<<"sin("<<i;
		if(i!=n){
			if(i%2!=0){
			cout<<"-";
			}else{
				cout<<"+";
			}	
		}
		else{
			for(int j=0;j<n;j++){
				cout<<")";
			}
		}
		
		i++;	
		sin(i,n);
	}

}

int main(){
	int n;
	cin>>n;
	for(int i=1;i<n;i++){
		cout<<"(";
	}

	for(int i=1;i<n;i++){
		
		sin(1,i);
		cout<<"+"<<n-i+1<<")";
	}
	
	sin(1,n);
	cout<<"+1";
	
	return 0;
}
