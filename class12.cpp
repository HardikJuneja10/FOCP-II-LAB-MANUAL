#include<iostream>
using namespace std;

class Bank{

    public:
    string account_number;
    string name;
    float balance=0;

     Bank(string acc , string n , float b) {  // constructor
    account_number= acc;
     name=n;
     balance=b;
     }

     ~Bank(){
   cout<<"\nAccount closed."<<endl;   // destructor 
}



void deposit(){                          // function
    int amount;
    cout<<"ENTER AMOUNT TO BE DEPOSITED = ";
    cin>>amount;
      balance=balance+amount;
}

void withdraw(){                        // function
      int amount;
      cout<<"ENTER AMOUNT TO BE WITHDRAWN = ";
      cin>>amount; 
  if (amount<= balance){
    balance=balance-amount;}
  else{
    cout<<"INSUFFICIENT BALANCE";
}

}
void display(){                         // function
   
    cout<<"the balance in your account is = "<<balance;
}

};
int main(){
// Bank b1;

Bank b1("101","Hardik",5000);

    // cout<<"Enter account number: ";
    // cin>>b1.account_number;

    // cout<<"Enter name: ";
    // cin>>b1.name;

    // cout<<"Enter balance: ";
    // cin>>b1.balance;

    b1.deposit();
    b1.withdraw();
    b1.display();



    return 0;
}

