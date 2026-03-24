#include<iostream>
using namespace std;
int main(){
    int n,m,i,j;
    cout<<"ENTER THE NUMBER OF ROWS ";
    cin>>n;
    cout<<"ENTER THE NUMBER OF COLUMNS ";
    cin>>m;                                   //left to right row h
    for(i=1 ; i<=n ; i++) {
        for(j=1 ; j<=m ; j++){  cout<<"*";}
        cout<<endl;
      
    }             
}