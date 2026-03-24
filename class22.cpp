#include<iostream>
using namespace std;

class SmartLight{

    public:

string brand;
int brightness;
bool isOn;

SmartLight( string b , int br=50 , bool ison=false){
brand=b;
brightness=br;
isOn=ison;
}

SmartLight( string b="HAVELLS" , int br=50 , bool ison=true){
brand=b;
brightness=br;
isOn=ison;
}
void turnon(){
isOn=true;
}

void turnoff(){
  isOn=false;  
}

void increaseBrightness(){
   if(brightness<50){
    brightness=brightness+10;
   } 
}

void DecreaseBrightness(){
     increaseBrightness(){
   if(brightness<50){
    brightness=brightness+10;
   } 
}
void displayStatus(){
    cout<<"THE BULB IS "<<turnOn();
}



};