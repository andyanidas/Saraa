#include<iostream>

using namespace std;

int main(){
	int c = 12099,m,km;
	km = c/100000;
	m = (c- km*100000)/100;
	c = c - km*100000 - m*100;
	cout<<km<<"km"<<endl<<m<<"m"<<endl<<c<<"cm";
	
	
	return 0;
}
