#include<iostream>
using namespace std;

int main(){
    int n, i, j;

    cout << "ENTER N: ";
    cin >> n;

    for(i = 1; i <= n; i++){        // rows
        for(j = 1; j <= n; j++){    // columns
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}
