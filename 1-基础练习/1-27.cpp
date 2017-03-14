#include<iostream>
using namespace std;

int n;
int count=0;
int a[13][13];

void dfs(int k,int q){
	for(int i=0;i<n;i++){
		if(a[k][i]==0||a[k][i]==2){
			continue;
		}
		
		int flag = 1;
		int y1 = i-1;
		int y2 = i+1; 
		for(int j=k-1;j>=0;j--){
			if(a[j][i]==q){
				flag = 0;
				break;
			}
			
			if(y1>=0&&a[j][y1]==q){
				flag = 0;
				break;
			}
			y1--;
			
			if(y2<n&&a[j][y2]==q){
				flag = 0;
				break;
			}
			y2++;
		}
		if(flag){
			a[k][i]=q;
			if(k<n-1){
				dfs(k+1,q);
			}
			else{
				if(q==2){
					dfs(0,3);
				}
				else{
					count++;
				}
			}
			a[k][i] = 1;
		}
	}
}

int main(){

	cin>>n;

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	
	dfs(0,2);	//�ȷźڻʺ�
	 
	cout<<count<<endl;
	
	return 0;
}
