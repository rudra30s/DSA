#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "enter the value of n: ";
    cin >> n;

    // upper half
    for(int i = 1; i <= n; i++){
        
        // stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        // spaces
        for(int j = 1; j <= 2*(n - i); j++){
            cout << " ";
        }

        // stars
        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        cout << endl; // ✅ only here
    }

    // lower half
    for(int i = n; i >= 1; i--){
        
        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        for(int j = 1; j <= 2*(n - i); j++){
            cout << " ";
        }

        for(int j = 1; j <= i; j++){
            cout << "*";
        }

        cout << endl; // ✅ only here
    }
}