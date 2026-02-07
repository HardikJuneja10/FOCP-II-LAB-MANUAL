#include<iostream>
using namespace std;
int a,b;

int add(){
 cout<<"ENTER VALUES OF A AND B ";
 cin>>a>>b;
 return a+b;
}
int subtract(){
cout<<"ENTER VALUES OF A AND B ";
 cin>>a>>b;
 return a-b;
}

int multiply(){
cout<<"ENTER VALUES OF A AND B ";
 cin>>a>>b;
 return a*b;
}

int division(){
cout<<"ENTER VALUES OF A AND B ";
 cin>>a>>b;
 return a/b;
}

int main(){
    int choice , result;

    cout<<"1.ADDITION"<<endl;
    cout<<"2.SUBTRACTION"<<endl;
    cout<<"3.MULTIPLICATION"<<endl;
    cout<<"4.DIVISION"<<endl;
    cout<<"ENTER YOUR CHOICE ";
    cin>>choice;

    if(choice==1){
        result=add();
    }

    else if(choice==2){
        result=subtract();
    }
    else if(choice==3){
       result= multiply();
    }
    else if(choice==4){
        result=division();
    }

    else {
        cout<<"INVALID";
    }

    cout<<"THE RESULT IS "<<result;

    
    

}