#include<iostream>
using namespace std;

bool powerof2(int n){
    if(n<=0) return 0;

    while (n%2==0) n/=2;

    return n==1;
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    bool ans=powerof2(n);
    if(ans) cout<<"The number is power of 2";
    else cout<<"The number is not the power of 2";
}