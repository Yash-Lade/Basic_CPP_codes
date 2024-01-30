#include<iostream>
using namespace std;
int recur(int a)
{
	if(a<1)
	return 0;
	
	else
	{
		cout<<a;
		recur(a-1);
		cout<<a;
	}
}
int main()
{
	int no;
	cout<<"Enter the number :";cin>>no;
	
	recur(no);
}
