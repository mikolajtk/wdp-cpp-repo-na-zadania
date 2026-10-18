#include <iomanip>
#include <iostream>
using namespace std;
int main(){
cout<<" Witaj urzytkowniku, podaj swoj wiek wage i wzrost"<<endl;
int wiek;
double wzrost;
string imie;
cout<<"Podaj swoj wiek : ";
cin>>wiek;
cout<<"Podaj swoja imie (bez spacji): ";
cin>>imie;
cout<<"Podaj swoj wzrost(w cm) : ";
cin>> wzrost;
cout<<imie<<endl<<wiek<<endl;
cout<<fixed;
cout<<setprecision(2)<<wzrost<<endl;












return 0;
}
