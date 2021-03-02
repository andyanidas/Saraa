#include<iostream>

using namespace std;

//iteration
int main(){
	int n,lDig;
	cin>>n; //n = 723456 / 100000
	lDig = n%10;
	
	for(; n>10 ; n = n/10){
	}
	cout<<"First Digit: "<<n<<endl;
	cout<<"Last Digit : "<<lDig;
	return 0;
}
