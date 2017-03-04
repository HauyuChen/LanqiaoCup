#include<iostream>

using namespace std;

int main(){
	int n;
	int x,y,z;
	for(int i=100;i<=999;i++){
		x=i/100;
		y=(i%100)/10;
		z=(i%10);
		n = x*x*x + y*y*y + z*z*z;
		if(n==i){
			cout<<i<<endl;
		}
	}	
	return 0;
}
