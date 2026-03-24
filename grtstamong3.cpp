#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"ENTER THE VALUE OF A";
      cin>>a;

    cout<<"ENTER THE VALUE OF B";
      cin>>b;

    cout<<"ENTER THE VALUE OF C";
      cin>>c;

    if(a>b){
      if(a>c){
        cout<<"A IS GREATEST";}
      else{
        cout<<"C IS GREATEST";}
    }

    else {
        if(b>c){
        cout<<"B IS GREATEST";}
        else{
        cout<<"C IS GREATEST"; }
    }
      
        
}