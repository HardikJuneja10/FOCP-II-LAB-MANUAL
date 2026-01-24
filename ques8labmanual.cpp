#include<iostream>
//using namespace std;
int main(){

    int a;

    std::cout<<"ENTER ID ";
    std::cin>>a;

    if(a%3==0 && a%5==0){
       std::cout<<"BUZZ";
    }

    else if(a%5==0){
       std::cout<<"FUZZ";
    }

    else
   std::cout<<"NOT DIVISBLE";


}