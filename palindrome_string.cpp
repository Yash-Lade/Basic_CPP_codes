#include<iostream>
#include<vector>
#include<string.h>
using namespace std;

bool palindrome(string s){
    int left=0,right=s.size()-1;

    while (left<right)
    {
        while(left < right && !isalnum(s[left])) left++;

        while(left < right && !isalnum(s[right])) right--;

        if(tolower(s[left])!=tolower(s[right])) return false;
        left++;
        right--;
    }

    return true;
    
}

int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    bool ans=palindrome(s);
    if(ans) cout<<"Yes, the entered string is Palindrome !";
    else cout<<" :( nope the string ain't palindrome";
}