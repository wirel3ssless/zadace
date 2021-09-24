#include<iostream>
using namespace std;
int main (){
 float prosjek;
 cout<<"Unesite vas prosjek"<<endl;
 cin>>prosjek;
 if (prosjek >= 1 && prosjek <=1.4){
 	cout<<"Vas prosjek je 1";
 }
 else if (prosjek >= 1.5 && prosjek <= 2.4){
 	cout<<"Vas prosjek je 2";
 }
  else if (prosjek >= 2.5 && prosjek <= 3.4){
 	cout<<"Vas prosjek je 3";
 }
  else if (prosjek >= 3.5 && prosjek <= 4.4){
 	cout<<"Vas prosjek je 4";
 }
  else if (prosjek >= 4.5 && prosjek <= 5.0){
 	cout<<"Vas prosjek je 5";
 }
}
