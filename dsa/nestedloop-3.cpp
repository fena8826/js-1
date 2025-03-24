#include<iostream>
using namespace std;
 int main(){
 	int rows=5;
 	for (int i=1 ; i<= rows; i++){
 		for(int j = rows; j>= i; j--){
 			cout << j;
 		}
 		
 	for(int k=1;k<i;k++){
 		cout<<k;
	 }
	 cout<<5<<endl;
	 }
	 return 0;
	 }