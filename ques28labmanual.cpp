#include<iostream>
using namespace std;
int main(){
    int n,odd=0,even=0,sum=0,total=0,i;
    int arr[5];

    cout<<"ENTER ALL NUMBERS= ";
    for(i=0 ; i<5 ; i++){
    cin>>arr[i];}
    
    for(i=0 ; i<5 ; i++){
        if(arr[i]%2==0){
            // even++;
            sum=sum+arr[i];
        }
            
        else { 
            // odd++;
            total=total+arr[i];
            
        }   
    }
    
            cout<<"THE SUM OF EVEN NUMBERS ARE= "<<sum<<endl;
            cout<<"THE SUM OF ODD NUMBERS ARE= "<<total;
            // cout<<odd<<endl<<total;


}
