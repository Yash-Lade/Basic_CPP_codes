#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    int rev=0,lastdig,org=n;
    while (n>0)
    {
        lastdig=n%10;
        n=n/10;
        rev=(rev*10)+lastdig;
    }
    if (rev == org)
    {
        cout<<"The number is palindrome number !!";
    }
    else
    cout<<"The number ain't palindrome !!";
    
    return 0;
}