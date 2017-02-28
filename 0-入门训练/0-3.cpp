#include<iostream>
#include <cmath>

using namespace std;

int main(){
	
	int r;
	double p = atan(1.0)*4;
	double s;
	cin >> r;
	s = r*r*p;
	printf("%.7lf",s);
	
	return 0;
}
