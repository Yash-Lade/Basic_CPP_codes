#include<iostream>
using namespace std;

int main()
{
	int a,b;

	cout<<"@Author - Yash Lade !!\n";
	cout<<"Enter first number :";
	cin>>a;
	
	cout<<"Enter second number :";
	cin>>b;
	
	cout<<"Values of a="<<a<<"and b="<<b<<"before swapping.\n";
	int swap=0;
	
	swap=a;
	a=b;
	b=swap;
	cout<<"Values of a="<<a<<"and b="<<b<<"after swapping.";
}

	
