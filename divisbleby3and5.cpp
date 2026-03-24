#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"ENTER A NUMBER";
    cin>>n;

    if(n%3==0 && n%5==0){
        cout<<"YES THE NUMBER IS DIVISBLE";
    }
    else
    cout<<"THE NUMBER IS NOT DIVISBLE";
}