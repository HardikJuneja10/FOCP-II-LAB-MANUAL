#include<iostream>
using namespace std;

class Product{

    public:

   string product_name ;
   int price; 
   int  quantity ;

    Product(string pn , int p ,int q){
        product_name=pn;
        price=p;
        quantity=q;   
    }
    ~Product(){
    cout<<"PRODUCT IS REMOVED";
    }

    void calculate(){
        int total=price*quantity;
        cout<<total;
    }

    void display(){
        cout<<"PRODUCT NAME : "<<product_name;
        cout<<"PRICE : "<<price;
        cout<<"QUANTITY : "<<quantity;
    }
};

int main(){
    Product p1( "SHAMPOO" , 500 , 2);
    p1.display();
    Product p2( "FACEWASH" , 1000 , 4);
    p2.display();


    return 0;

}
