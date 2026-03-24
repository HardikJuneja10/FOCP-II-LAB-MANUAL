#include<iostream>
using namespace std;

class Bank{
public:
string name;
int acc_no;
int balance;

Bank(){
name= "";
acc_no=1111;
balance=0;

}
Bank(string n , int acc_n , int b){
name=n;
acc_no=acc_n;
balance=b;
}

void deposit(int amount ){
balance=balance+amount;

}

void withdraw(int amount ){
if(amount<=balance){
    balance=balance-amount;}
    else {
    cout<<"INSUFFICIENT BALANCE "<<endl;
    }
}
void details(){
    cout<<"THE BALANCE IS" <<balance;



}
};

int main(){
 Bank b1;
 b1.acc_no;
 b1.deposit(5000);
 b1.withdraw(2000);
 b1.details();

 Bank b2;
 b2.acc_no;
 b2.deposit(5000);
 b2.withdraw(2000);
 b2.details();



    return 0;
}