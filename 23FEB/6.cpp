#include<iostream>

using namespace std;

int main(){
	int x;
    cout<<"Enter any number: ";
	cin>>x;
	
	if(x==0){
	    cout<<"The number you entered is zero";
	}else if(x>0){
		cout<<"Positive";
	}else{
		cout<<"Negative";
	}



	return 0;
}
