#include<iostream>

using namespace std;

int main(){
	int x = 15;
	x = 20;
	x = x + 20;
	/*
	bool check = !(5==5);
	cout<<check;
	*/
	int y = 100;
	//y =100 x=40
	
	//checking whether x is equal to y or not
	if(!(y != x)){
		cout<<"y is equal to x";
	}else{
		cout<<"x not equal to y";
	}
	
	
	
	return 0;
}
