#include<iostream>
using namespace std;

int main()
{
	int a,b,c;

	cout<<"@Author - Yash Lade !!/n/n";
	cout<<"Enter first number :";
	cin>>a;
	
	cout<<"Enter second number :";
	cin>>b;
	
	cout<<"Enter third number :";
	cin>>c;
	
	if (a>b && a>c)
	cout<<"\nFirst number i.e. "<<a<<" is the largest.";
	
	else if ( b>a && b>c)
	cout<<"\nSecond number i.e. "<<b<<" is the largest.";
	
	else
	cout<<"\nThird number i.e. "<<c<<" is the largest.";
	
}
