#include<iostream>
using namespace std;

class MovieTicket{

    public:

string MovieName;
int seatNumber;
int ticketPrice;
bool isBooked; 


MovieTicket(){              //default constructor
MovieName=" ";
seatNumber=0 ;
ticketPrice=200;
isBooked="False";
}

MovieTicket(string name , int number ,int  price ){   //parameterized constructor
      MovieName=name;
      seatNumber=number;
      ticketPrice=price;
}

void bookTicket(){
    if(!isBooked){
        isBooked=true;
 cout<<"THE TICKET IS BOOKED FOR THE MOVIE"<<MovieName;cout<<"for seat no"<<seatNumber ;      
    }
} 

void cancelTicket(){
    if(isBooked){
        isBooked=false;
 cout<<"THE TICKET IS CANCELLED FOR THE MOVIE"<<MovieName;cout<<"for seat no"<<seatNumber ;      
    }
} 

void displaydetails(){
    cout<<"MOVIE NAME IS "<<MovieName<<endl;
    cout<<"SEAT NUMBER IS "<<seatNumber<<endl;
    cout<<"PRICE : "<<ticketPrice<<endl;
    cout<<"BOOKED : "<<isBooked<<endl;
}

void calculatetotalcost(int numberOfTickets){
   cout<<"Total cost : "<<ticketPrice*200;
}
};

int main(){
    MovieTicket m1;
    m1.bookTicket();
    m1.displaydetails();
    m1.calculatetotalcost(2);



    MovieTicket m2("HARDIK" ,9 , 200 );
    m2.bookTicket();
    m2.displaydetails();
    m2.calculatetotalcost(2);

}