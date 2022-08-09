#include <iostream>
using namespace std;

int main() {
    int a,b,c,d;
    cout<<"Enter a number";
    cin>>a;
    b=a/10;
    c=b*10;
    d=a-c;
    if ((d==2)||(d==4)||(d==6)||(d==8)||(d==0))
    {
        cout<<"Even number";
        
    }
    else
    {
        cout<<"Odd Number";
    }
    return 0;
}
