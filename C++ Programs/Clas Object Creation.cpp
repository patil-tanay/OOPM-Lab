#include <iostream>
using namespace std;
class student
{
    private:
    char name[50];
    int rollno;
    int year;
    
    public:
    void getdetails(void);
    void putdetails(void);
};
void student::getdetails(void)
{
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Enter your roll no.:\n";
    cin>>rollno;
    cout<<"Enter your year of study:\n";
    cin>>year;
    
}

void student::putdetails(void)
{
    cout<<"Student details: \n ";
    cout<<"Name:"<<name<<"\n"<<"Roll no.:"<<rollno<<"\n"<<"Year of study"<<year;
}
int main() {
    student std;
    std.getdetails();
    std.putdetails();
    
    return 0;
}
