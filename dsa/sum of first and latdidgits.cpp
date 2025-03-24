#include<iostream>
using namespace std;
//sum is first and last number

int main(){
	int num, sum , lastdigit, firstdigit;
	
	 cout<<"Enter any nymber:";
	 cin>>num;
	 
	 lastdigit=num%10;
	 
	 while(num>10)
	 {
	 
	 	num=num/10;
	 	
	 }
	firstdigit=num;
	 
	 sum=firstdigit+lastdigit;
	 
	 cout<<"sum is "<<sum<<endl;
	 
	 
	 return 0;
	 
}