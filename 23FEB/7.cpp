#include<iostream>

using namespace std;

int main(){
	bool raining = true;
	bool goOut = false;
	
	if(raining && goOut){
		cout<<"take umberella";
	}else{
		cout<<"no need for umberella";
	}
	
	int grade;
	cout<<"Enter your grade: ";
	cin>>grade;
	
	if(grade>=80 && grade<90){
		cout<<"You got grade B";
	}
	
	if(grade>100 || grade<0){
		cout<<"Inviled input";
	}
	


	return 0;
}
