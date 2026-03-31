#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the number:";
    cin>>a;
    b = 1;
    int ans = (a>>b);
    if(ans%2==0){
        cout<<"number is power of 2"<<endl;
    }
    else {
        cout<<"number is not power of 2"<<endl;
    }
}