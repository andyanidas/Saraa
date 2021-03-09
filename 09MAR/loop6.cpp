#include<iostream>

using namespace std;

int main(){
	int on=0,tw=0,tr=0,fo=0,fi=0,si=0,se=0,eg=0,ni=0,ze=0,num,a;
	
	cout<<"Enter a number: ";
	cin>>num;
	
	for(;num>0;num/=10){
		a = num%10;
		if(a==1){
			on++;
		}else if(a==2){
			tw++;
		}
	}
	cout<<"one = "<<on;
	cout<<"two = "<<tw;
	
	return 0;
}
