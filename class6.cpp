#include<iostream>
using namespace std;


class bankaccount {
public:

string accountholdername;
string accountnumber;
double balance;
int dep;
int with;

void inputdetails(){
cout<<"ENTER NAME = ";
cin>>accountholdername;
cout<<"ENTER ACC N0 = ";
cin>>accountnumber;
cout<<"ENTER BALANCE = "; 
cin>>balance;
}

void deposit(double amount){
cin>>dep;
}
void withdraw(double amount){
cin>>with;
}

void displaydetails(){
    cout<<"NAME = "<<accountholdername<<endl;
    cout<<"ACCOUNT NUMBER "<<accountnumber<<endl;
    cout<<"BALANCE "<<balance<<endl;
}


};

int main(){

    bankaccount bank;

    bank.inputdetails();
    bank.displaydetails();
    bank.deposit();
    bank.withdraw();

    return 0;
}
