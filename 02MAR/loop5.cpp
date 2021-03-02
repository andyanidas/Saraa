#include<iostream>

using namespace std;

//iteration
int main(){
	int n,lDig,fDig,temp,count = 0,ten = 1,newN;
	//cin>>n; //n = 723456 % 100000 = 10*10*10*10*10
	n = 723456;
	temp = n;
	lDig = n%10;
	
	for(; temp>10 ; temp = temp/10){
	}
	fDig = temp;
	
	temp = n;
	for(; temp>0 ; temp = temp/10){
		count++;
	}
	
	for(int i = 0; i<count-1 ; i++){
		ten = ten * 10;
	}
	//n = 723456 % 123456*6 = 10*10*10*10*10
	newN = n%ten;
	newN = newN + ten*lDig;
	
	newN = newN/10*10 + fDig;
	cout<<newN;
	return 0;
}
