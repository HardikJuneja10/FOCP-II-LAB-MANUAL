#include<iostream>
using namespace std;

class A{
    public:
    int a;
    int b;

A(){
    cout<<"THIS IS A DEFAULT CONSTRUCTOR ";
    int a=0;
    int b=0;
}
A(int a , int b){
    this->a=a;
    this->b=b;

}
void display(){
    cout<<"endl<<a= "<<a;
    cout<<"endl<<b= "<<b;
}
};
int main(){
    A obj1,obj2(35,70);
    obj1.display();
    obj2.display();
    return 0;
}