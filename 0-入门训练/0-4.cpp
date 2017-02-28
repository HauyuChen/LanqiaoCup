#include<iostream>

using namespace std;
const int N = 1000000;

int main(){
	int n;
	int F[N];
	
	F[1]=1;
	F[2]=1;
	for(int i=3;i<=N;i++){
		F[i] = (F[i-1] + F[i-2])%10007;
	}
	cin >> n;
	cout << F[n];
	
	return 0;
}

