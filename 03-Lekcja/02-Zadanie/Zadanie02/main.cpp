#include <iostream>

using namespace std;

int main()
{
    float a;
    float b;
    char z;
    cin>>a;
    cin>>b;
    cin>>z;
    if (z == '+'){
        cout<<a+b;
    }else if (z == '-'){
    cout<<a-b;
    }else if (z=='*'){
    cout<<a*b;

    }else if (z=='/'){
    if (b==0){
        cout<<"error";


    }else
    cout<<a/b;
    }else
    cout<<"error";










    return 0;
}
