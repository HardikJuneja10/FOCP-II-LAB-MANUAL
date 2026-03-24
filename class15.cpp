#include<iostream>
using namespace std;

class electricitybill{
    string consumerName;
    int units;
    float billAmount;
    
    public:
    electricitybill(){                        // default constructor
    consumerName="NOT ASSIGNED";
     units=0;
    billAmount=0;
}

    electricitybill(string n , int u){       // parametrized cosntructor 
    consumerName=n;
    units=u;
}

    void calculateBill(){
      if(units<100){
        billAmount=units*5;
      }

      else if(units <=100 && units>200){
        billAmount=(100*5)+(units-100)*7;
      }

      else if(units >200){
        billAmount=(100*5)+(100*7)+(units-200)*10;
    }
    }

    void displayBill(){
    cout<<" COSNUMER NAME :  "<<consumerName<<endl;
    cout<<" UNITS CONSUMED : "<<units<<endl;
    cout<<" BILL AMOUNT : " <<billAmount<<endl;
    }
};

int main(){
    electricitybill e1;
    e1.calculateBill();
    e1.displayBill();

    electricitybill e2("HARDIK JUNEJA" , 2000 );
    e2.calculateBill();
    e2.displayBill();

    return 0;
}