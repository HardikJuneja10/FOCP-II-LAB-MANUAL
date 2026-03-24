#include<iostream>
using namespace std;
int main(){
    int i,j,n,m;
    char ch;

    cout<<"ENTER THE LAST NUMBER OR CHARACTER";
    cin>>n;

    for(i=1 ; i<=n ; i++){
         ch = 'A' + i - 1;
        for(j=1 ; j<=n ; j++){
           
            cout<<ch;
        }
        cout<<endl;
    }
}