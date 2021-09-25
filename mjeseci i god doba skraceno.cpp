#include<iostream>
using namespace std;
int main (){
	int a;
	cout<<"Unesite broj od 1 do 12"<<endl;
	cin>>a; 
	switch(a)
    {
        case 1: cout<<"Mjesec januar, zima"<<endl; cout<<endl; break;
        case 2: cout<<"Mjesec februar, zima"<<endl; cout<<endl; break;
        case 3: cout<<"Mjesec mart, zima osim ako je datum 22 ili kasnije"<<endl; cout<<endl; break;
        case 4: cout<<"Mjesec april, proljece"<<endl; cout<<endl; break;
        case 5: cout<<"Mjesec maj, proljece"<<endl; cout<<endl; break;
        case 6: cout<<"Mjesec juni, proljece osim ako je datum 22 ili kasnije"<<endl; cout<<endl; break;
        case 7: cout<<"Mjesec juli, ljeto"<<endl; cout<<endl; break;
        case 8: cout<<"Mjesec august, ljeto"<<endl; cout<<endl; break;
        case 9: cout<<"Mjesec septembar, ljeto osim ako je datum 24 ili kasnije"<<endl; cout<<endl; break;
        case 10: cout<<"Mjesec oktobar, jesen"<<endl; cout<<endl; break;
        case 11: cout<<"Mjesec novembar, jesen"<<endl; cout<<endl; break;
        case 12: cout<<"Mjesec decembar, jesen osim ako je datum 22 ili kasnije"<<endl; cout<<endl; break;

    }
	return 0;
}
