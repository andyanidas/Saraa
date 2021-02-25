#include<iostream>

using namespace std;

int main(){
	int day;
	cout<<"Enter a number 1-7: ";
	cin>>day;
	
	switch(day){
		case 1:
			cout<<"Mon";
			break;
		case 2:
			cout<<"TU";
			break;
		case 3:
			cout<<"WED";
			break;
		case 4:
			cout<<"TH";
			break;
		case 5:
			cout<<"FRI";
			break;
		case 6:
			cout<<"SAT";
			break;
		case 7:
			cout<<"SUN";
			break;
		default:
			cout<<"Inviled input!";
			break;
	}
	
	
	
	
	return 0;
}
