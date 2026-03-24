#include<iostream>
using namespace std;
//A default constructor that sets material as "Wood", price as 5000, and legs as 4 
class Table{
    public:

    int price;
    string material;
    int legs;

    Table(int p=5000 , string m="wood" , int l=4 ) {   // default constructor
    price=p;
    material=m;
    legs=l;
    }

    Table( string m, int p  ){
         price=p;
    material=m;
    legs=4;
  
    }

    Table(int p ,int l ,string m   ){
         price= p;
    material= m;
    legs=l;
    }

    void display(){
        cout<<"PRICE : "<<price<<endl;
        cout<<"MATERIAL : "<<material<<endl;
        cout<<"LEGS : "<<legs;
    }
};

int main(){
    Table t1;
    Table t2(  "steel",1300  );
    Table t3 ( 2000 , 5,"iron" );

    t1.display();
    t2.display();
    t3.display();

    return 0;
}





