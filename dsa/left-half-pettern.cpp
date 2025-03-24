#include<iostream>
using namespace std;
//left half triangle pettern
int main(){
	
	int rows=5;
	for(int i=rows; i>=1; i--){
		for (int j=1; j<=i; j++){
			if(j % 2==0){
					cout<<0;
			}
			else {
			cout<<1;
		}
	}
		cout<<endl;
	}
	return 0;
}