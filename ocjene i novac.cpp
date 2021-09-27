#include<iostream>
using namespace std;
int main(){
	float a,b,c,n;
	cout<<"Unesite ocjene"<<endl;
	cin>>a>>b>>c;
	if (a+b+c >= 11){
		n=a*b*c;
	}
	else {
		n=(a*b*c)/2;
	}
	cout<<n;
}
