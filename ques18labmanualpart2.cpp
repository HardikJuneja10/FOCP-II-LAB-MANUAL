#include<iostream>
using namespace std;
int main(){

    int original,rev=0,n;

    cout<<"ENTER A NUMBER";
    cin>>n;

    original = n;

    while (n>0){
        rev = rev*10+(n%10);
        n=n/10;
    }

    if(original==rev){
    cout<<"PALINDROME";
}
else
 cout<<"NOT A PALINDROME";
}