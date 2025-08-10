#include<iostream>
#include<climits>
using namespace std;

int revno(int n){
	int lastdig=0;
	long long rev=0;

	while(n>0){
		lastdig=n%10;
        n=n/10;
        rev=(rev*10)+lastdig;
		if(rev> INT_MAX || rev < INT_MIN) return 0;
	}
	return rev;
}
int main()
{
	int n,rev=0,temp;
	
	cout<<"Enter a number :";
	cin>>n;
	
	int rev=revno(n);
	
	cout<<"The reverse is"<<rev;
}

