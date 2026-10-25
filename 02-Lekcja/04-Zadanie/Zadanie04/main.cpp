#include <iostream>

using namespace std;

int main()
{
    int sekundy;
    cout<<"podaj sekundy : ";
    cin>>sekundy;

    int minu=sekundy/60;
    int reszta=sekundy%60;
    cout<<"Jest "<<minu<<" minut i "<<reszta<<" sekund";
    return 0;
}
