#include<iostream>
using namespace std;

int main()
{
	int p,r,t,si;
	
	cout<<"Enter the amount of principal :";
	cin>>p;
	
	cout<<"Enter the amount of rate :";
	cin>>r;
	
	cout<<"Enter the amount of time :";
	cin>>t;
	
	si=(p*r*t)/100;
	
	cout<<"The required simple interest is :"<<si;
}

