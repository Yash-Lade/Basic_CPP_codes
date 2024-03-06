#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int n;
	vector<int> numbers;
	cout<<"Enter the elements in vector :";
	for(int i=1;i<=5;i++){
	cin>>n;
	numbers.push_back(n);
	}
	cout<<"The elements in vector are :";
	for(int i=0;i<=5;i++)
	cout<<numbers[i]<<" ";
	
}
