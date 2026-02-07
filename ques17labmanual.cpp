#include<iostream>
using namespace std;
int main(){

    int i,n,count=0,sum=0;

    cout<<"ENTER A NUMBER";
    cin>>n;

    for(i=1 ; i<n ; i++){
        if(n%i==0){
            count++;
            sum=sum+i;
        }
    }

//    cout<<count<<endl;
//    cout<<sum;

   if(n==sum){
    cout<<"PERFECT NUMBER";
   }
   else
   cout<<"NOT A PERFECT NO";
}