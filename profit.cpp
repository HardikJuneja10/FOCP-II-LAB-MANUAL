#include<iostream>
using namespace std;
int main(){
    int cp,sp,l,p;
cout<<"ENTER THE CP ";
cin>>cp;
cout<<"ENTER THE SP ";
cin>>sp;
l=cp-sp;
p=sp-cp;
if(cp>sp){
    cout<<"LOSS";
    cout<<l;
}
if(cp<sp){
    cout<<"PROFIT";
    cout<<p;
}
if(cp==sp){
    cout<<"NO PROFIT NO LOSS";
    cout<<0;}

}