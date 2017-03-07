#include<iostream>
using namespace std;

int main(){
	int n;
	int j;
	string s;
	cin>>n;
	string str[10];
	string strbin[10];
	string stroct[10];
	string strbin2[10];
	for(int i=0;i<n;i++){
		cin>>str[i];
	}
	
	for(int i=0;i<n;i++){
		j=0;
		while(str[i][j]){
			switch(str[i][j]){
				case '0':
					strbin[i] += "0000";
					break;
				case '1':
					strbin[i] += "0001";
					break;
				case '2':
					strbin[i] += "0010";
					break;
				case '3':
					strbin[i] += "0011";
					break;
				case '4':
					strbin[i] += "0100";
					break;
				case '5':
					strbin[i] += "0101";
					break;
				case '6':
					strbin[i] += "0110";
					break;
				case '7':
					strbin[i] += "0111";
					break;
				case '8':
					strbin[i] += "1000";
					break;
				case '9':
					strbin[i] += "1001";
					break;
				case 'A':
					strbin[i] += "1010";
					break;
				case 'B':
					strbin[i] += "1011";
					break;
				case 'C':
					strbin[i] += "1100";
					break;
				case 'D':
					strbin[i] += "1101";
					break;
				case 'E':
					strbin[i] += "1110";
					break;
				case 'F':
					strbin[i] += "1111";
					break;
			}
			j++;
		}
		
		int len = strbin[i].length()-1;
		int r = (len+1)%3;
		char ch;
		
		for(int k=0;k<=len/2;k++){
			ch = strbin[i][k];
			strbin[i][k] = strbin[i][len-k];
			strbin[i][len-k] = ch;
		}
		if(r!=0){
			int f = 3-r;
			for(int fi=0;fi<f;fi++){
				strbin[i] += "0";
			}
		}
		len = strbin[i].length();
		
		
		for(int j=len-1;j>=len-3;j-=3){
			string s1,s2,s3;
			s1 = strbin[i][j];
			s2 = strbin[i][j-1];
			s3 = strbin[i][j-2];
			s += s1 + s2 + s3;
			if(s=="000"){
				
			}
			else if(s=="001"){
				cout<<"1";
			}
			else if(s=="010"){
				cout<<"2";
			}
			else if(s=="011"){
				cout<<"3";
			}
			else if(s=="100"){
				cout<<"4";
			}
			else if(s=="101"){
				cout<<"5";
			}
			else if(s=="110"){
				cout<<"6";
			}
			else if(s=="111"){
				cout<<"7";
			}
	
			s="";
		}
		
		for(int j=len-4;j>0;j-=3){
			string s1,s2,s3;
			s1 = strbin[i][j];
			s2 = strbin[i][j-1];
			s3 = strbin[i][j-2];
			s += s1 + s2 + s3;

			if(s=="000"){
				cout<<"0";
			}
			else if(s=="001"){
				cout<<"1";
			}
			else if(s=="010"){
				cout<<"2";
			}
			else if(s=="011"){
				cout<<"3";
			}
			else if(s=="100"){
				cout<<"4";
			}
			else if(s=="101"){
				cout<<"5";
			}
			else if(s=="110"){
				cout<<"6";
			}
			else if(s=="111"){
				cout<<"7";
			}
	
			s="";
		}
		cout<<endl;

	}
	
	
	
	return 0;
}
