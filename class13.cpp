#include<iostream>
using namespace std;

class bank{  //class declaration
public:

string name;
string acc_no;
int balance;

bank(string n , string acc , int b)   //constructor
{
    name=n;
    acc_no=acc;
    balance=b;
}

void deposit(){          // method decl
    int amount;
   cout<<"ENTER AMOUNT TO BE DEPOSITED = ";
   cin>>amount;
   balance=balance+amount;
}
void withdraw(){         // method decl
    int amount;
   cout<<"ENTER AMOUNT TO BE withdrawn = ";
   cin>>amount;
   if(amount<=balance){
   balance=balance-amount;}
   else {
   cout<<"INSUFFICIENT BALANCE";
   }
 
}
void balanceee(){          // method decl
cout<<"THE BALANCE IS  = "<<balance;
}
};
int main(){              // main decl
//   bank b1;
  bank b1("HARDIK" , "99911" , 2000);

   b1.deposit();
   b1.withdraw();
   b1.balanceee();

    return 0;
}