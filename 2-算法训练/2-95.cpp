#include<iostream>
#include<cmath>
using namespace std;

void exp(int val){
	int e=0;
	while(val>=pow(2,e)){
		e++;
	}
	e--;
	int num=val;
	for(int i = e; i >= 0; i--)  
    {  
    	
        if(val & (1 << i)) {
        	cout << "2"; 
			
			if(i>2){
				cout<<"(";
				
				if(pow(2,i)==num){
					exp(i);
					cout<<")";
				}else{
					exp(i);
					cout<<")";
					cout<<"+";
				}
				num = num - pow(2,i);
			}else if(i==2){
				cout<<"(2)";
				if((val & (1 << (i-1))) || (val & (1 << (i-2)))){
					cout<<"+";
				}else{
					
				}
			}
			else if(i==1){
				if(val & (1 << (i-1))){
					cout<<"+";
				} 
			}else{
				cout<<"(";
				cout<<0;
				cout<<")"; 
				continue;
			}
        } 
		
    }  
}

int main(){
	int n;
	cin>>n;
	
	exp(n);
	
	return 0;
} 
