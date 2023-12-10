#include<iostream>
using namespace std;

void swap(int* a,int *b);

int main()
{
	int a=34,b=1;
	cout<<"The value of a : "<<a<<" and the value of b :"<<b<<" before swapping .\n";
	swap(&a,&b);
	cout<<"The value of a : "<<a<<" and the value of b :"<<b<<" after swapping .\n";
	
}

void swap(int* a,int *b)
{
	int temp=*a; //temp stores value at address a
	*a=*b;
	*b=temp;
}
