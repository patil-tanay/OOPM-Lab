
#include <iostream>
using namespace std;
int main() {
    float a;
    int b,c,d;
    cout<<"Enter a number:";
    cin>>a;
    b=a/2;
    c=b*2;
    d=a-c;
    if (d==0)
    {
        cout<<"Even number";
    }
    else 
    {
        cout<<"Odd Number";
        
    }
    return 0;
}
