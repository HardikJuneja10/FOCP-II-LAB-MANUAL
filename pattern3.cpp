#include<iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout<<"ENTER THE NUMBER OF ROWS";
    cin>>n;
    // cout<<"ENTER THE NUMBER OF COLUMNS";
    // cin>>m;
    for(i=1 ; i<=n ; i++){
        for(j=1 ; j<=n ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}