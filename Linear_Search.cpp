#include<iostream>
using namespace std;
 int Linear_Search(int arr[],int sz,int target ){
    for(int i=0; i<sz;i++){
        if(arr[i]==target){
            return i;
        }
    }
    return -1;
}
int main(){
    int arr[] = {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};
    int sz = 8;
    int target;
    cout<<"enter the target:";
    cin>>target;
    cout<< Linear_Search(arr,sz,target);
    return 0;
}