#include<iostream>
using namespace std;
int main(){

    int arr[10];
    int i,max;

    for(i=0 ; i<10 ; i++){
        cout<<"ENTER PRICE OF "<<i+1 <<" OBJECT = ";
        cin>>arr[i];
    }

    max=arr[0];
 for(i=0 ; i<9 ; i++){
    if(arr[i]>max){
        max=arr[i];
    }
}
    cout<<max;
}