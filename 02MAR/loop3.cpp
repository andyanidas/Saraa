#include<iostream>

using namespace std;

//iteration
int main(){
	int n,fDig,lDig; //whole number
	cout<<"Enter n :";
	cin>>n; //n = 723456 / 100000
	lDig = n%10;
	
	for(; n>0 ; n = n/10){
		count++; 
	}
	cout<<count;
	return 0;
}
