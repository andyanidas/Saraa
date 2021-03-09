#include<iostream>

using namespace std;

int main(){
	int s;
	cout<<"Enter size: ";
	cin>>s;
	for(int i = 0; i<s; i++){
		for(int k = s-1-i; k>0 ; k--){
			cout<<" ";
		}
		for(int j = 0; j<s; j++){
			cout<<"*";
		}
		cout<<endl;
	}
	
	return 0;
}
/* s = 7

 j=	0123456
i=0	123456*******	
i=1	12345*******	
i=2	1234*******	
i=3	123*******	
i=4	12*******		
i=5	1*******		
i=6	*******		

*/



