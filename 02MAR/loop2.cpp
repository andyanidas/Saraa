#include<iostream>

using namespace std;

int main(){
	int n,total = 0;
	cout<<"Enter n :";
	cin>>n; //n = 10
	
	for(int i = 1; i<=n ; i++){
		total = total + i; // 1 + 2 + 3 + 4
	}
	cout<<total;
	return 0;
}
