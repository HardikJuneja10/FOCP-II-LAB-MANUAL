#include<iostream>
using namespace std;
int main(){

    int i,n,max,max2;
    int arr[5];

    for(i=0 ; i<5 ; i++){
        cout<<"ENTER THE "<<i+1<<" VALUE= ";
        cin>>arr[i];
    }

    max=arr[0];

    for(i=0 ; i<5 ; i++){
        if(arr[i]>max){
        max=arr[i];
      }
    }

    cout<<"THE LARGEST ELEMENT IS = "<<max;
    
   

}