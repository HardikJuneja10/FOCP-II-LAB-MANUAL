// Employee Information System
// Scenario:
// Store employee details and calculate annual salary.
// Class Name:
// Employee
// Attributes:
// •	int empId
// •	string name
// •	double monthlySalary
// Methods:
// •	void inputDetails()
// •	double calculateAnnualSalary()
// •	void displayDetails()

#include<iostream>
using namespace std;

class employee{
public:

	int empid;
	string name;
	double monthlysalary;
    double result;

void inputdetails(){
    cout<<"ENTER INPUT DETAILS = ";
    cin>>empid;

     cout<<"ENTER NAME = ";
    cin>>name;

    cout<<"ENTER SALARY = ";
    cin>>monthlysalary;


}
double calculateannualsalary(){
    return 12*monthlysalary;
    // cout<<result;
//    return result ;
}
void displaydetails(){
    cout<<"EMPLOYEE ID IS "<< empid;
    cout<<"ENTER YOUR NAME = "<<name;
    cout<<"ENTER YOUT MONTHLY SALARY = "<<monthlysalary;
    cout<<"YOUR ANNUAL SALARY IS = "<<calculateannualsalary();
    // cout<<result;

}
};
int main(){
      employee divanshu;
      divanshu.inputdetails();
      divanshu.calculateannualsalary();
      divanshu.displaydetails();



    return 0;
}

