#include<iostream>
using namespace std;
int main(){

    int n,i,min;
    int arr[30];

    for(i=0 ; i<30 ; i++){
        cout<<"ENTER THE TEMPERATURE OF DAY "<<i+1;
        cin>>arr[i];
    }

    min=arr[0];

    for(i=0 ; i<30 ; i++){
    if(min>arr[i]){
    min=arr[i];}
    }

    cout<<"THE MINIMUM TEMPERATURE IS = "<<min;
}