// Q7. A game compares three players' scores to find who is ahead. Implement a solution to accept three scores
// and identify the winner.

#include<iostream>
using namespace std;
int main(){

    int a,b,c,d=0;

    cout<<"ENTER 1ST SCORE";
    cin>>a;

    cout<<"ENTER 2ND SCORE";
    cin>>b;

    cout<<"ENTER 3RD SCORE";
    cin>>c;

    if(a>b){
        cout<<"1ST IS GREATEST";
       if(a>c){
        cout<<"1ST IS GREATEST";
       } 
       else{
       cout<<"3RD IS GREATEST";
    }
}

    else{ //b>a
       if(b>c){
        cout<<"2ND IS GREATEST";
       }
       else//c>b
       cout<<"3RD IS GREATEST";
    }
    }



