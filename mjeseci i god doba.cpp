#include<iostream>
using namespace std;
int main (){
	int a;
	cout<<"Unesite broj od 1 do 12"<<endl;
	cin>>a;
    if (a == 1){
		cout<<"To je mjesec januar, godisnje doba zima";
	}
	else if (a == 2){
		cout<<"To je mjesec februar, godisnje doba zima";
	}
	else if (a == 3){
		cout<<"To je mjesec mart, godisnje doba zima AKO je datum 20 ili ranije";
	}
	else if (a == 4){
		cout<<"To je mjesec april, godisnje doba proljece";
	}
	else if (a == 5){
		cout<<"To je mjesec maj, godisnje doba proljece";
	}
	else if (a == 6){
		cout<<"To je mjesec juni, godisnje doba proljece AKO je datum 20 ili ranije";
	}
	else if (a == 7){
		cout<<"To je mjesec juli, godisnje doba ljeto";
	}
	else if (a == 8){
		cout<<"To je mjesec august, godisnje doba ljeto";
	}
	else if (a == 9){
		cout<<"To je mjesec septembar, godisnje doba ljeto AKO je datum 22 ili ranije";
	}
	else if (a == 10){
		cout<<"To je mjesec oktobar, godisnje doba jesen";
	}
	else if (a == 11){
		cout<<"To je mjesec novembar, godisnje doba jesen";
	}
	else if (a == 12){
		cout<<"To je mjesec decembar, godisnje doba jesen AKO je datum 20 ili ranije";
	}
    else {
    	cout<<"GRESKA, GRESKA, BOOM!";
	}
	return 0;
}
