#include<iostream>
using namespace std;

class Candy{

    public:
    
string color;
int points;

void setCandy(string c, int p){
color=c;
points=p;
}
void displayCandy(){
    cout<<"COLOR IS : "<<color<<endl;
    cout<<"POINTS ARE :"<<points;


}
};
int main(){
Candy c1,c2;
c1.setCandy("blue" , 10);
c2.setCandy("red" , 5);
c1.displayCandy();
c2.displayCandy();


    return 0;
}