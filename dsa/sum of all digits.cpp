#include<iostream>
using namespace std;

//sum of all digits

int main(){
	int num, sum , lastdigit;
	sum=0;
	 cout<<"Enter any nymber:";
	 cin>>num;
	 
	 
	 while(num>0)
	 {
	 	lastdigit=num%10;
	 	sum=sum+lastdigit;
	 	num=num/10;
	 	
	 }
	 
	 cout<<"sum of digits :"<<sum<<endl;
	 
	 
	 return 0;
	 
}