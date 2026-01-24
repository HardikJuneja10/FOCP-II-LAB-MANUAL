//Q10. A calendar app calculates whether February has 29 days. Implement a solution to check if a year is a
//leap year or not.

#include<iostream>
int main(){

    int a;

    std::cout<<"ENTER YEAR";
    std::cin>>a;

    if(a%4==0){
        std::cout<<"LEAP YEAR";
    }

    else if(a%4==0 && a%100==0){
       std::cout<<"NOT A LEAP YEAR";
    }

    else if(a%400==0){
       std::cout<<"LEAP YEAR";
        
    }
}