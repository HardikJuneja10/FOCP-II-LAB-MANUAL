// Q12. A civil engineer classifies a triangle design as equilateral, isosceles, or scalene. Implement a solution to
// check the triangle type based on its sides.


#include<iostream>
int main(){

    int a,b,c;

    std::cout<<"ENTER 1ST SIDE";
    std::cin>>a;

    std::cout<<"ENTER 2ND SIDE";
    std::cin>>b;

    std::cout<<"ENTER 3RD SIDE";
    std::cin>>c;


if(a==b && b==c){
    std::cout<<"EQUILATTERAL";
}

else if(a==b|| a==c || b==c){
    std::cout<<"ISOCELLES";
}

else
    std::cout<<"SCALENE";

}