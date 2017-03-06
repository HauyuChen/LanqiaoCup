#include<stdio.h>

int main(){
	int n;
	int i=0;
	int k;
	scanf("%d",&n);
	char a[100];
	
	if(n==0){
		printf("0");
	}else{
		while(n!=0){
			if(n%16>=10){
				a[i++] = n%16 + 'A' - 10; 
			}else if(n%16<10){
				a[i++] = n%16 + '0';
			}
			n = n/16;
		}
		for(k=i-1;k>=0;k--){
			printf("%c",a[k]);
		}
	}
	
	return 0;
}
