#include<iostream>
using namespace std;

int fact(int);

int main()
{
	int a,b;
	
	cout<<"Enter a number :";
	cin>>a;
	
	b=fact(a);
	
	cout<<"The factorial of "<<a<<" is : "<<b;
}

int fact(int a)
{
	if(a==1)
	return 1;
	
	else
	return a*fact(a-1);
}
