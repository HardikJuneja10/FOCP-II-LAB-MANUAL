#include<iostream>
using namespace std;
int main(){

    int i,three=0 ,five=0 ;
    int arr[5];

    for(i=0 ; i<5 ; i++){
    cout<<"ENTER "<<i+1<<" ELEMENT = "  ;
    cin>>arr[i];
}
  for(i=0 ; i<5 ; i++){
    if(arr[i]%3==0){
    three++;
    }
    else if(arr[i]%5==0){
        five++;
    }
   


  }
cout<<"THE NUMBERS DIVISBLE BY THREE ARE = "<<three;
cout<<"THE NUMBERS DIVISBLE BY FIVE ARE = "<<five;
}