#include<iostream>
using namespace std;
void swap(int, int);
int main()
{
	int a,b,c;
	cout<<"Enter the first number: ";
	cin>>a;
	cout<<"Enter the second number: ";
	cin>>b;
	swap(a,b);
	}
	
	
	void swap(int a, int b)
	{
		int c;
		c=a;
		a=b;
		b=c;
		
		cout<<"Numbers after swapping: "<<a<<" "<<b;
		
	}
