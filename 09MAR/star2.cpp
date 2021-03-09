#include<iostream>

using namespace std;

int main(){
	int s;
	cout<<"Enter size: ";
	cin>>s;
	for(int i = 0; i<s; i++){
		for(int j = 0; j<s; j++){
			if(i==0 || i==s-1 || j ==0 || j ==s-1 || i==j || s == i + j + 1){
				cout<<"*";
			}else{
				cout<<" ";
			}
		}
		cout<<endl;
	}
	
	return 0;
}
/* s = 7

 j=	0123456
i=0	*******		i=0 j=6 s = i + j + 1
i=1	**   **		i=1 j=5
i=2	* * * *		i=2 j=4
i=3	*  *  *		i=3 j=3
i=4	* * * *		i=4 j=2
i=5	**   **		i=5 j=1
i=6	*******		i=6 j=0

*/



