#include<iostream>

using namespace std;

int main(){
	char c;
    cout<<"Enter any character: ";
	cin>>c;
	c = c + 25;
	cout<<c<<endl;
	
	
	if(c>64 && c<91){
		cout<<"Big alphabet";
	}else if(c>96 && c<123){
		cout<<"small alphabet";
	}else{
		cout<<"it is not a alphabet";
	}



	return 0;
}
