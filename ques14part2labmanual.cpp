#include<iostream>
using namespace std;

int a,b;

    int add(){   
    return a+b;
    }

    int sub(){   
    return a-b;
    }

    int multiply(){       
        return a*b;

    }

    int divide(){
        return a/b;

    }

    int main(){
        int choice;
        cout<<"ENTER A ";
        cin>>a;

         cout<<"ENTER B ";
        cin>>b;

        cout<<"WHAT DO YOU WANT\n ";
        cout<<"ADDITION\n";
        cout<<"SUBTRACTION\n";
        cout<<"MULTIPLY\n";
        cout<<"DIVISION\n";

        cout<<"ENTER CHOICE";
        cin>>choice;

        if(choice==1){
            cout<<"RESULT = " <<add();
        }

        else if(choice==2){
             cout<<"RESULT = " <<sub();
        }

        else if(choice==3){
             cout<<"RESULT = " <<multiply();+
        }

        else if(choice==4){
           cout<<"RESULT = " <<divide();
        }
        
        else
        cout<<"INVALID";
    }

