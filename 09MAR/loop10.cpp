#include<iostream>

using namespace std;

int main(){
	int input,a=0,b=1,temp;
	
	cout<<"Enter a number:";
	cin>>input;
	
	for(int i = 0; i<input; i++){
		if(i==0){
			cout<<a<<" ";
		}else if(i==1){
			cout<<b<<" ";
		}else{
			temp = a + b;
			a = b;
			b = temp;
			cout<<b<<" ";
		}
	}
	
	
	return 0;
}
