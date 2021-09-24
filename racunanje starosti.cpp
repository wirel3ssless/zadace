#include<iostream>
using namespace std;
int main (){
	int mjesec, godina;
	cout<<"Unesite godinu i mjesec rodjenja"<<endl;
	cin>>godina>>mjesec;
	int a = 2021 - godina;
	int b = 9 - mjesec;
	if (b == -1){
		cout<<"Imate "<<a-1<<" godina i 11 mjeseci";
	}
	else if (b == -2){
		cout<<"Imate "<<a-1<<" godina i 10 mjeseci";
	}
	else if (b == -3){
		cout<<"Imate "<<a-1<<" godina i 9 mjeseci";
	}
	else if (b >= 0){
		cout<<"Imate "<<a<<" godina i "<<b<<" mjesec(i)";
	}
	else {
		cout<<"GRESKA!!!";
	}
	return 0;

}
