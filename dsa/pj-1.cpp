#include<iostream>
using namespace std;
  
  int main(){
  	
  	int score;
  	char grade;
  	
  	cout<<"Enter your score oute of 100:";
  	cin >>score;
  	
  	//calculate grade using operater
  	
  	(score>=90) ?
  		cout<<"Grade A":
  			
	(score>=80)?
	  	cout<<"Grade B":
	  		
	(score>=70)?
			cout<<"Grade C":
				
	(score>=60)?
	
			cout<<"Grade D":	
	(score>=50)?
	
		cout<<"faile":
			
	 cout<<"youre grade is"<<grade<<"";
	 
	 //provide addithional coments based on grade using swich..
	 
	  switch(grade){
	  	case 'A':
	  		cout<<"Excellent work:"<<endl;
	  		break;
	  	case 'B':
	  		cout<<"Well Done:"<<endl;
	  		break;
	  	case 'C':
	  		cout<<"Good job:"<<endl;
	  		break;
	  	case 'D':
	  		cout<<"You are pass but you do better:"<<endl;
	  		break;
	  	case 'F':
	  		cout<<"sorry, you are faile:"<<endl;
	  		break;
	  	
	  	cout<<"valide grade."<<endl;
	  		break;
	  }
	  
	  //if-else statement
	  
	  if( grade>='A'&& grade<= 'D')
{
	cout<<"congratulation...."<<endl;
	 }	 
	 else{
	 	cout<<"please try againe next time."<<endl;
	 
	 }
	 return 0;
  }
  
