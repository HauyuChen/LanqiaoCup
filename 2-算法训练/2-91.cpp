#include<iostream>
#include<cstring>
#include<algorithm>

using namespace std;

int main(){
	string str1,str2;
	cin>>str1>>str2;
	
	long long sum1=0,sum2=0;
	int len1 = str1.length();
	int len2 = str2.length();
	
	transform(str1.begin(),str1.end(),str1.begin(),::tolower);
	transform(str2.begin(),str2.end(),str2.begin(),::tolower);
	
	for(int i=0;i<len1;i++){
		sum1+=str1[i];
	}
	for(int i=0;i<len2;i++){
		sum2+=str2[i];
	}
	if(sum1==sum2){
		cout<<"Y";
	}else{
		cout<<"N";
	}
	return 0;
}
