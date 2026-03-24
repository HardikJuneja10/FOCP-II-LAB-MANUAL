#include<iostream>
using namespace std;

class Rectangle{
public:
float length;
float width;

void inputDimensions(){
    

    cout<<"ENTER LENGTH = ";
    cin>>length;

    cout<<"ENTER BREADTH = ";
    cin>>width;
}

float calculateArea(){
return length*width;
}

float calculatePerimeter(){
return length+length+width+width;
}

void displayResult(){
      cout<<"THE AREA OF RECTANGLE IS = "<<calculateArea();      
      cout<<"THE PERIMETER OF RECTANGLE IS = "<<calculatePerimeter();         
}
};
int main(){

Rectangle rect;

rect.inputDimensions();
rect.displayResult();

return 0;
}




