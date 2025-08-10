#include<iostream>
#include<climits>
using namespace std;

int revno(int x) {
        long long rev = 0;
        while (x != 0) {
            int lastdig = x % 10;
            x /= 10;
            rev = rev * 10 + lastdig;
            if (rev > INT_MAX || rev < INT_MIN) {
                return 0;
            }
        }
        return (int)rev;
}

int main()
{
	int n;
	
	cout<<"Enter a number :";
	cin>>n;
	
	int ans=revno(n);
	
	cout<<"The reverse is: "<<ans;
}
