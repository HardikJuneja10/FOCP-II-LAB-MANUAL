// Book Library Entry
// Scenario:
// Store and display book details.
// Class Name:
// Book
// Attributes:
// •	string title
// •	string author
// •	double price
// Methods:
// •	void inputDetails()
// •	void displayDetails()

#include<iostream>
using namespace std;

class Book{
public :
	string title;
	string author;
	double price;

    	void inputDetails(){

            cout<<"ENTER TITLE ";
            cin>>title;

            cout<<"ENTER AUTHOR ";
            cin>>author;

            cout<<"ENTER PRICE ";
            cin>>price;

        }
       void displayDetails(){

        cout<<"THE TITLE IS = "<<title<<endl;
        cout<<"THE AUTHOR IS "<<author<<endl;
        cout<<"THE PRICE IS "<<price<<endl;

       };
       };
       int main(){
       Book kitab;
       kitab.inputDetails();
       kitab.displayDetails();




        return 0; 
       }
