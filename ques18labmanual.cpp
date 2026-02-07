#include<iostream>
using namespace std;
int main(){
    int n,rev=0;

    cout<<"ENTER A NUMBER = ";        // assuming a number == 121 
    cin>>n;

    int original=n;

    while(n > 0){                    
    rev = rev * 10 + (n % 10);  // 1st--> 0 * 10 + (121 %10) ==    1             n=12
    n = n / 10;                 //2nd --> 1 * 10 + ( 12 % 10)==    12             n=1
                                // 3RD -->  12 * 10 + (1 / 10)==   121             n=0
}
 
       if(original==rev){
    cout<<"PALINDROME";
}
else
 cout<<"NOT A PALINDROME";


    
}