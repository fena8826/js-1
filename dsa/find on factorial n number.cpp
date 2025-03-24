#include<iostream>
using namespace std;

//program to find factorial of n number

int main(){
	
	int i,n;

	cout<<"Enter any number:";
	cin>>n;
	
	i=1;
	
	while(i<=n){
		if(n%i==0){
			cout<<i<<endl;
		}
		i++;
	}

	return 0;	
}