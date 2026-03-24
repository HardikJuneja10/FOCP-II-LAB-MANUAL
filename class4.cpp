#include<iostream>
using namespace std;

class fruit {   // 1st class 
public:
string name;
string color;
int quantity;
float price;
};

class student {   //2nd class
    public: 
string name;
string roll;
string standard;
};


int main(){
    fruit apple;
    apple.name="APPLE";
    apple.color="red";
    apple.quantity=10;
    apple.price=120.5;

    cout<<apple.name<<endl<<apple.color<<endl<<apple.quantity<<endl<<apple.price<<endl;


    student hardik;
    hardik.name="HARDIK";
    hardik.roll="079";
    hardik.standard="FIRST YEAR";

    cout<<hardik.name<<endl<<hardik.roll<<endl<<hardik.standard;


   return 0;
}