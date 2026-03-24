//Q1. Create a class Student with data members: name and marks. Use a constructor to initialize 
//  values and display the student details using a member function. 

#include<iostream>
using namespace std;

class Student {
    public:
    string name;
    int marks;

    Student(string n , int m){
        name=n;
        marks =m;
    }


void display(){
cout<<"NAME : " <<name;
cout<<"MARKS : "  <<marks;
}
};
int main(){
Student s1( "HARDIK" , "90");
s1.display();




    return 0;
}