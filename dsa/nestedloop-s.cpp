#include<iostream>
using namespace std;
 int main(){
 	int rows=5;
 	for (int i=1 ; i<= rows; i++){
 		for(int j = 1; j<= rows; i++){
 			for(int j =1; j<=rows - 1; j++){
 					cout << " ";
			 }
 			for(int k = 1; k<=i; k++){
 				if(i == 1|| i==rows||k==1||k==i){
 					cout<<" ";
				 }
				 else{
				 	cout<<" ";
				 }
			 }		
			
	cout<<endl;
	 }
	 return 0;
}

