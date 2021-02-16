#include<iostream>

using namespace std;

int main(){
	int a,b;
	cout<<"Enter 2 integer: ";
	cin>>a>>b; //10 10
	
	if(a>b){
		if(a>10){
			cout<<"A is greater than B and A is greater than 10";
		}else{
			cout<<"A is greater than B but A is less than 10";
		}
	}else{
		if(b>10){
			cout<<"A is less than B and B is greater than 10";
		}else{
			cout<<"A is less than B but B is less than 10";
		}
	}
	
	if(a==0){
	//	if a is eqaul to 0 then run this line
	}else if(a>0){
	//	it is positive
	}else{
	//	it is negative
	}
	
	if(a%2==0){
		
	}
	
	/*
	if(a>b){
		cout<<"Maximum: "<<a;
	}else{
		cout<<"Maximum: "<<b;
	}
	*/
	/*
	Homework
	1. check if input number is greater than 1000 or between 100-1000 or between 0-100
	assume that input number is positive
	*/
	
	
	
	return 0;
}
