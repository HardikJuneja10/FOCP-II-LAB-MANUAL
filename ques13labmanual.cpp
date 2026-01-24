// Q13. A mathematics tool computes the exact roots of a quadratic equation for teaching purposes. Implement a
// solution to calculate the roots of a quadratic equation
#include<iostream>
int main(){
    int a,b,c,d,r;

    std::cout<<"ENTER A";
        std::cin>>a;

         std::cout<<"ENTER B";
        std::cin>>b;

         std::cout<<"ENTER C";
        std::cin>>c;

    if(a==0){
        std::cout<<"NOT A QUADRATIC EQUATION\n";
    }

    d=b*b-4*a*c;

    std::cout<<"DISCRIMINANT IS/n"<<d;

    std::cout<<"roots are"; 

}
