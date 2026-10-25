#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double ocena1;
    double ocena2;
    double ocena3;
    double ocena4;
    double ocena5;
    cout<<"witaj urzytkowniku podaj kolejno 5 ocen a program policzy srednia "<<endl;
    cin>>ocena1>>ocena2>>ocena3>>ocena4>>ocena5;
    double sredna= (ocena1+ocena2+ocena3+ocena4+ocena5)/5;
    cout<<fixed;
    cout<<"sredna ocen to ";
    cout<<setprecision(2)<<sredna;





    return 0;
}
