#include<iostream>
#include<cstring>
using namespace std;

int main(){
	string a;
	string b;
	cin>>a>>b;
	int r=0;
	int temp;
	int low,high;
	int cnt=0;
	int numa,numb,numc;
	int lena = a.length();
	int lenb = b.length();
	int lenc = (lena>lenb?lena:lenb)+1;
	char c[lenc];
	
	for(int i=0;i<lena/2;i++){
		temp = a[i];
		a[i] = a[lena-i-1];
		a[lena-i-1] = temp;
	}
	
	for(int i=0;i<lenb/2;i++){
		temp = b[i];
		b[i] = b[lenb-i-1];
		b[lenb-i-1] = temp;
	}
	
	if(lena<lenb){
		low = lena;
		high = lenb;
	}
	else{
		low = lenb;
		high = lena;
	}
	
	for(int i=0;i<low;i++){
		numa = a[i] - '0';
		numb = b[i] - '0';
		numc = numa+numb+r;	
		c[cnt++] = (numc%10) + '0';
		if(numc>=10){
			r = 1;
		}
		else{
			r = 0;
		}
	}
	if(lena==lenb){
		if(r==1){
			c[cnt++] = r + '0';
		}
	}
	else{
		if(low==lenb){
			numc = a[low++] - '0' + r;
			while(numc>=10){
				c[cnt++] = (numc%10) + '0';
				numc = a[low++] - '0' + 1;
			}
			c[cnt++] = numc + '0';

			for(int i=low;i<high;i++){
				c[cnt++] = a[i];
			}
		}
		else{
			numc = b[low++] - '0' + r;
			while(numc>=10){
				c[cnt++] = (numc%10) + '0';
				numc = b[low++] - '0' + 1;
			}
			c[cnt++] = numc + '0';

			for(int i=low;i<high;i++){
				c[cnt++] = b[i];
			}
		}
	}
	
	
	
	for(int i=cnt-1;i>=0;i--){
		cout<<c[i];
	}
	
	
	return 0;
}
