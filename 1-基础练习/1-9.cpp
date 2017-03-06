#include<stdio.h>

int main(){
	int n;
	int n1,n2,n3,n4,n5,n6;
	scanf("%d",&n);
	
	for(int n1=1;n1<=9;n1++){
		for(int n2=0;n2<=9;n2++){
			for(int n3=0;n3<=9;n3++){
				if(n1+n2+n3+n2+n1==n){
					printf("%d%d%d%d%d\n",n1,n2,n3,n2,n1);
				}
			}
		}
	}
	
	for(int n1=1;n1<=9;n1++){
		for(int n2=0;n2<=9;n2++){
			for(int n3=0;n3<=9;n3++){
				if(n1+n2+n3+n3+n2+n1==n){
					printf("%d%d%d%d%d%d\n",n1,n2,n3,n3,n2,n1);
				}
			}
		}
	}
	
	return 0;
}
