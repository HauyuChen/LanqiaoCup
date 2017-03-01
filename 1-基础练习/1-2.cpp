#include<iostream>

using namespace std;

int main(){
	for(int i=0;i<=31;i++){
		cout<<(i/16)<<((i%16)/8)<<((i%8)/4)<<((i%4)/2)<<(i%2);
		cout<<"\n";
	}
	
	return 0;
}
