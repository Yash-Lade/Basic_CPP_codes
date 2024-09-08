#include<iostream>
using namespace std;

int main(){
	int n;
	bool isPrime=true;
	cout<<"Enter a number :";
	cin>>n;
	
	for(int i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			isPrime=false;
			break;
		}
	
	}
	
	if(isPrime==0)
	cout<<"The number enetered is not a prime number !!";
	
	else
	cout<<"Entered number is a prime number !!";
}
