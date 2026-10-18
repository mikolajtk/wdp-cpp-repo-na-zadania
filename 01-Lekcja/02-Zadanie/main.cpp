#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   double liczba;
   cout<<"Podaj liczbe rzeczywista"<<endl;
   cin>>liczba;
   cout<<"Program wypisze kolejno powyzsza liczbe z dokladnscia do 1, 3 i 5 miejsc po kropce"<<endl;
   cout<<fixed;
    cout << setprecision(1) << liczba << endl;
    cout << setprecision(3) << liczba << endl;
    cout << setprecision(5) << liczba << endl;






    return 0;
}
