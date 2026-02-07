#include<iostream>
int main(){

    int n,i,largest;
    // int arr[n];

    std::cout<<"ENTER THE NUMBER OF ELEMENTS ";
    std::cin>>n;

       int arr[n];

   
    for (i=0 ; i<n; i++)
    {std::cout<<"ENTER THE " <<i+1; std::cout<<" ELEMENT";
    std::cin>>arr[i];
} 
    

largest=arr[0];

    for(i=0 ; i<n ; i++){
    if(arr[i]>largest){
        largest=arr[i];
    }

    }
    std::cout<<"THE LARGEST NUMBER IS = "<<largest;
}