#include<iostream>
using namespace std;
 int main(){
 	int rows=5;
 	for (int i=1 ; i<= rows; i++){
 		for(int j = 1; j<= i; j++){
 			if(j==1 || j == i){
 					cout << i;
			 }
			 else{
			 	cout<<j;
			 }
 		
 		}
 	
 		if (i !=1){
 			cout<<1;
 			 }
 				cout<<endl;
	 }
	 return 0;
}