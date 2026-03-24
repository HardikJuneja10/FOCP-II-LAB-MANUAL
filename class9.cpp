// Temperature Converter
// Scenario:
// Convert Celsius to Fahrenheit.
// Class Name:
// Temperature
// Attributes:
// •	float celsius
// Methods:
// •	void inputTemperature()
// •	float convertToFahrenheit()
// •	void displayResult()

#include<iostream>
using namespace std;
class Temperature{
    public:
    float celsius;

    void inputTemperature(){
     cout<<"ENTER TEMPERATURE IN CELSIUS = ";
     cin>>celsius;
    }
    float convertToFahrenheit(){
    return (celsius * 9/5) + 32;
    }
    void displayResult(){
    cout<<"THE TEMP IN CELSIUS IS = "<<celsius;
    cout<<"THE TEMPERATURE IN FARHNEIT IS = "<<convertToFahrenheit();
    }
   };

int main(){
  Temperature taapman;
  taapman.inputTemperature();
  taapman.convertToFahrenheit();
  taapman.displayResult();




return 0;
}

