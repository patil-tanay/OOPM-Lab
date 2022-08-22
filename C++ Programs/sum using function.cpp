#include<iostream>
using namespace std;
int add(int, int);
int main()
{
	int a,b,c;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	c=add(a,b);
	cout<<"Sum of two numbers is: "<< c;
	}
	int add(int a, int b)
	{
		int c;
		c=a+b;
		return c;
	}
