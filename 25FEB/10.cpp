#include<iostream>

using namespace std;

int main(){
	int given;
	cout<<"Enter amount: ";
	cin>>given; // 587
	
	if(given>=100){
		cout<<"100: "<<given/100;
		given = given - given/100*100;
	}
	
	if(given>=50){
		cout<<"50: "<<given/50;
		given = given - given/50*50;
	}
	
	if(given>=20){
		cout<<"20: "<<given/20;
		given = given - given/20*20;
	}
	
	
	return 0;
}
