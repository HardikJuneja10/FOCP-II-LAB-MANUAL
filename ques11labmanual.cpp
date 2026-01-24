// Q11. A wholesale supplier applies 10% discount if the order > 1000 items. Implement a solution to compute total
// expenses and apply a discount accordingly.

#include<iostream>
int main(){
    int c,n;

    std::cout<<"ENTER THE NUMBER OF ENTITIES";
    std::cin>>n;

    std::cout<<"ENTER THE COST OF ONE ENTITY";
    std::cin>>c;

    if(n>1000){
        std::cout<<"THE TOTAL BILL IS "<<(n*c)-(0.1*n*c);  
    }
    else
    std::cout<<"THE TOTAL BILL IS "<<n*c;

}