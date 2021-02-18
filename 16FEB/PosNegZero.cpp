#include<iostream>

using namespace std;

int main(){
	int x;
    cout<<"Enter any number: ";
	cin>>x;
	
	if(x==0){
	    cout<<"The number you entered is zero";
	}else if(x>0){
	    cout<<"The number you entered is possitive";
	}else{
	    cout<<"The number you entered is negative";
	}
	
	//if x==0 bol cout<<zero else if x>0 bol cout<<pos else cout<<neg

	return 0;
}
