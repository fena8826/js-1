#include<iostream>

using namespace std;

//program to find sum numbers factorial


int main(){
	
	int i,n,fact;
	fact=1;
	
	
	cout<<"Enter any number:";
	cin>>n ;
	
	i=n;
	
	while(i>=1){
		fact=fact*i;
		i--;
	}
	cout<<"factorial is="<<fact<<endl;
	return 0;	
}