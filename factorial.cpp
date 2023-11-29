#include<iostream>
using namespace std;

int main()
{
	int a,i,fact=1;
	
	cout<<"Enter a number :";
	cin>>a;
	
	for(i=1;i<=a;i++)	//factorial using recursion by Yash Lade
	{
		fact=fact*i;
	}
	cout<<"The factorial of "<<a<<" is "<<fact;
}
