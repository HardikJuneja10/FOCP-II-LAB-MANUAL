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
cout<<"COLOR = "<<color<<endl;
cout<<"POINTS = "<<points<<endl;

}
};

int main(){
Candy c1;
Candy c2;

c1.setCandy("RED",5);
c2.setCandy("BLUE",10);

c1.displayCandy();
c2.displayCandy();


    return 0;
}