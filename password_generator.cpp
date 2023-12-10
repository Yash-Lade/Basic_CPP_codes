#include<bits/stdc++.h>
using namespace std;

int main()
{
	int len;
	char letters,numbers,pass;
	string all;
	cout<<"Enter the password length :";
	cin>>len;
	
	letters='a','b','c';
	numbers='1','2','3';
	
	all=letters+numbers;
	srand(time(0));
	pass=rand(all);
	
}
