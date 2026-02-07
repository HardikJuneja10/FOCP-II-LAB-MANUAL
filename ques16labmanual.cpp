#include<iostream>
using namespace std;
int main(){
    int n,count=0,i;

    cout<<"ENTER A NUMBER =";
    cin>>n;

    for(i=2 ; i<=n ; i++){
        if(n%i==0){
        count=count+1;}
    }
    // cout<<count;
if(count>1){
    cout<<"NOT A PRIME NUMBER";
}
    else{
        cout<<"PRIME NUMBER";
    }
}

