#include<iostream>
using namespace std;

 //half triangle pettern
 
 int main(){
	
	int rows=5;
	for(int i=1; i<= rows; i++)
	{
		for(int j=1;j<=i;j++){
			cout<< 4 <<j;
		if(j ! = i){
		cout<<" ";
	}
		
		}
		cout<<endl;
		 }
		return 0; 	
 }