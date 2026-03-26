#include<iostream>
using namespace std;
int main()
{int n;
cout<<"Enter the number n:"<<endl;
cin>>n;
if(n==2){
    cout<<"prime";
}
bool isPrime = true;

for (int i = 2; i*i <= n; i++) {
    if (n % i == 0) {
        isPrime = false;
        break;
    }

}

if (n <= 1) {
    cout << "Not Prime";
} else if (isPrime) {
    cout << "Prime";
} else {
    cout << "Not Prime";
}
}