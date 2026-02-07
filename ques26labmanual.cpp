#include<iostream>
using namespace std;
int main(){
    
    int arr[5];
    int i,sum=0;

    for(i=0 ; i<5 ; i++){
        cout<<"ENTER MARKS OF "<<i+1<<"SUBJECT OUT OF 100= ";
        cin>>arr[i];
    }

    for(i=0 ; i<5 ; i++){
    sum=sum+arr[i];}

    cout<< "THE TOTAL IS = "<<sum/n;

    cout<<"THE PERCENTAGE IS "<<sum/5;
 
}