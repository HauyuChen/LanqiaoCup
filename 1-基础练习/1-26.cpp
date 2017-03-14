#include<iostream>
using namespace std;

void pron(int num){
	switch(num){
		case 0:		cout<<"zero ";			break;
		case 1:		cout<<"one ";			break;
		case 2:		cout<<"two ";			break;
		case 3:		cout<<"three ";			break;
		case 4:		cout<<"four ";			break;
		case 5:		cout<<"five ";			break;
		case 6:		cout<<"six ";			break;
		case 7:		cout<<"seven ";			break;
		case 8:		cout<<"eight ";			break;
		case 9:		cout<<"nine ";			break;
		case 10:	cout<<"ten ";			break;
		case 11:	cout<<"eleven ";		break;
		case 12:	cout<<"twelve ";		break;
		case 13:	cout<<"thirteen ";		break;
		case 14:	cout<<"fourteen ";		break;
		case 15:	cout<<"fifteen ";		break;
		case 16:	cout<<"sixteen ";		break;
		case 17:	cout<<"seventeen ";		break;
		case 18:	cout<<"eighteen ";		break;
		case 19:	cout<<"nineteen ";		break;
		case 20:	cout<<"twenty ";		break;
		case 30:	cout<<"thirty ";		break;
		case 40:	cout<<"forty ";			break;
		case 50:	cout<<"fifty ";			break;
	}
}

int main(){
	int h,m;
	cin>>h>>m;
	
	if(h>20){
		cout<<"twenty ";
		pron(h-20);
	}
	else{
		pron(h);
	}
	
	if(m==0){
		cout<<"o'clock";
	}
	else{
		if(m<=20){
			pron(m);
		}
		else{
			if(m>20&&m<30){
				cout<<"twenty ";
				pron((m-20)%10);
			}
			else if(m>=30&&m<40){
				cout<<"thirty ";
				if(m>30){
					pron(m-30);
				}
			}
			else if(m>=40&&m<50){
				cout<<"forty ";
				if(m>40){
					pron(m-40);
				}
			}
			else if(m>=50&&m<60){
				cout<<"fifty ";
				if(m>50){
					pron(m-50);
				}	
			}
		}
	}
	
	return 0;
}
