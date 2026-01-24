//A text editor auto-detects whether an input letter is a vowel, a consonant or a number. Implement a
//solution to classify the symbol.
#include<iostream>
int main(){

    char ch;

    std::cout<<"ENTER THE CHARACTER OR NUMBER ";
    std::cin>>ch;

    if
        (ch=='a' || ch=='e'|| ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
        {
        std::cout<<"VOWEL";
        }
    
     else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
        std::cout<<"CONSONANT";
    }

    else if (ch>'0' && ch<'9' && ch=='9'){
        std::cout<<"NUMBER";
    }

    else{
   std::cout<<"NOTHING";}
    
}