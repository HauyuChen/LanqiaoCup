#include<iostream>
using namespace std;

void pron(int num){
	switch(num){
		case 1:
			cout<<"yi ";
			break;
		case 2:
			cout<<"er ";
			break;
		case 3:
			cout<<"san ";
			break;
		case 4:
			cout<<"si ";
			break;
		case 5:
			cout<<"wu ";
			break;
		case 6:
			cout<<"liu ";
			break;
		case 7:
			cout<<"qi ";
			break;
		case 8:
			cout<<"ba ";
			break;
		case 9:
			cout<<"jiu ";
			break;	
	}
}

int main(){
	int n;
	cin>>n;
	
	int n1 = n/100000000;
	if(n1>0){
		if(n1>=10){
			cout<<"shi ";
			pron(n1%10);
		}
		else{
			pron(n1);
		}
		cout<<"yi ";
	}
	
	int n2 = (n%100000000)/10000000;
	if(n2>0){
		pron(n2);
		cout<<"qian ";
	}
	else if(n1>0&&n2==0&&n%10000000>0){
		cout<<"ling ";
	}
	
	int n3 = (n%10000000)/1000000;
	if(n3>0){
		pron(n3);
		cout<<"bai ";
	}
	else if(n2>0&&n3==0&&n%1000000>0){
		cout<<"ling ";
	}
	
	int n4 = (n%1000000)/100000;
	if(n4>0){
		if(n4!=1){
			pron(n4);
		} 
		cout<<"shi ";
	}
	else if(n3>0&&n4==0&&n%100000>0){
		cout<<"ling ";
	}
	
	
	int n5 = (n%100000)/10000;
	if(n5>0){
		pron(n5);
	}
	
	if(n>=10000){
		cout<<"wan ";
	}
	
	int n6 = (n%10000)/1000;
	if(n6>0){
		pron(n6);
		cout<<"qian ";
	}else if(n5>0&&n6==0&&n%1000>0){
		cout<<"ling ";
	}
	
	int n7 = (n%1000)/100;
	if(n7>0){
		pron(n7);
		cout<<"bai ";
	}else if(n6>0&&n7==0&&n%100>0){
		cout<<"ling ";
	}
	
	int n8 = (n%100)/10;
	if(n8>0){
		pron(n8);
		cout<<"shi ";
	}
	else if(n7>0&&n8==0&&n%10>0){
		cout<<"ling ";
	}
	
	int n9 = n%10;
	if(n9>0){
		pron(n9);
	}else
	
	return 0;
}
