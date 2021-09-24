#include<iostream>
using namespace std;
int main (){
	int a;
	cout<<"Unesite broj"<<endl;
	cin>>a;
	if (a % 3 == 0 && a % 5 == 0){
		cout<<"Uneseni broj je dijeljiv i sa 3 i sa 5 ";
	}
	else if (a % 3 == 0){
		cout<<"Broj je dijeljiv sa 3";
	}
	else if (a % 5 == 0){
		cout<<"Broj je dijeljiv sa 5";
	}
	else {
	    cout<<"Broj nije dijeljiv ni sa 3 ni sa 5";	
	}
	return 0;
}
