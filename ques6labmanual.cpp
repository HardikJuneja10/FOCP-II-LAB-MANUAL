 //QUES 5--An HR system needs to calculate employees’ net salaries, including a fixed 12% bonus for each worker.
//Implement a solution to accept the number of employees and their basic salary. Compute bonus, net salary, and
//display results.


#include<iostream>
using namespace std;
int main(){

int n,t,b,s;



cout<<"ENTER THE NUMBER OF employees";
cin>>n;

cout<<"ENTER THE basic salary";
cin>>s;

b=0.12*s;

cout<<"BONUS IS" <<b<<endl;

cout<<"TOTAL SALARY IS "<<s+b;






}