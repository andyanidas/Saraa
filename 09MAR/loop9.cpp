#include<iostream>

using namespace std;

int main(){
	int input;
	bool prime = true;
	
	cout<<"Enter a number: ";
	cin>>input;
	
	
	for(int i = 2 ; i<input/2+1 ; i++){//8
		if(input%i==0){
			prime = false;
			cout<<i;
			break;
		}
	}
	if(prime){
		cout<<"it is a prime";
	}else{
		cout<<"Not prime!";
	}
	
	return 0;
}
