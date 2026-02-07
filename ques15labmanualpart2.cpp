#include<iostream>
using namespace std;
int main(){
    
    int i,n,largest;
    

    cout<<"ENTER THE NUMBER OF ELEMENTS ";
    cin>>n;

    int arr[n];

    
    for{cout<<"ENTER THE"<<(i=0 ; i<n ; i++)
   cin>>arr[i];

   largest=arr[0];

   for(i=1 ; i<n ; i++){
     if (arr[i]>largest){
        largest=arr[i];
     }
   }

   cout<<"LARGEST NUMBER IS "<<largest;
}