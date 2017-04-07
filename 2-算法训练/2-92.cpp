#include<iostream>
using namespace std;

int main(){
	string s;
	getline(cin,s);
	
	int x,y;
	
	if (s[3] == ' ') {
        x = s[2] - '0';
        if (s[5] == '\0') {
            y = s[4] - '0';
        }
        else {
            y = 10;
        }
    }
    else {
        x = 10;
        if (s[6] == '\0') {
            y = s[5] - '0';
        }
        else {
            y = 10;
        }
    }
	
	switch(s[0]){
		case '+': cout<<(x+y);	break;
		case '-': cout<<(x-y);	break;
		case '*': cout<<(x*y);	break;
		case '/': cout<<(x/y);	break;
	}

	
	return 0;
}
