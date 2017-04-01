#include<iostream>
#include<cstring>

using namespace std;

int main(){
	string str1;
	cin>>str1;
	
	int len = str1.length();
	
	for(int i=0;i<len;i++){
		if(str1[i]>='a'&&str1[i]<='z'){
			str1[i] -= 32;
		}else{
			str1[i]+=32;
		}
		cout<<str1[i];
	}
	
	
	
	
	return 0;
}
