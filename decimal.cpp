#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"ENTER THE DECIMAL NUMBER : ";
    cin>>n;
    
    int i = 0;
    int arr[100];

    while(n > 0){
        arr[i] = n % 2;   
        n = n / 2;
        i++;
    }

    for(int j = i-1; j >= 0; j--){
        cout << arr[j];
    }
    cout<<endl;

    return 0;
}