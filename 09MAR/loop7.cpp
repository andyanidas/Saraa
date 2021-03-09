#include<iostream>

using namespace std;

int main(){
	int base,power,result;
	
	cout<<"Enter a number: ";
	cin>>base;
	result = 1;
	cout<<"Enter power of that number: ";
	cin>>power;
	
	
	for(;power>0;power--){
		result *= base;
	}
	
	cout<<"\nresult="<<result;
	return 0;
}
