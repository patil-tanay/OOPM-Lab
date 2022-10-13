// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class student{
    static int count;
    public:
    student()
    {
        count++;
    }
    int getcount()
    {
        return count;
    }
};
//int student::count;


int main() {
    student c1;
    cout<<c1.getcount();
    student c2;
    cout<<c2.getcount();
    
    return 0;
}
