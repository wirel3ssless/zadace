#include<iostream>
using namespace std;
int main (){
int a,b;
cout<<"Unesite 2 broja"<<endl;
cin>>a>>b;
if (a<b){
	cout<<b<<" je vece od " <<a;
}
else if (a>b){
	cout<<a<<" je vece od " <<b;
}
else { 
cout<<"Brojevi su jednaki";
}
}
