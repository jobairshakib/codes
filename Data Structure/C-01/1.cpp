#include<iostream>
using namespace std;

int main(){
    int arr[10]; 
    for (int i=0; i<10; i++){
    cout<<"element - "<<i<<":";
    cin>>arr[i];
    }
    for (int i=0; i<10; i++){
    cout<<"\t"<<arr[i];

    }


    return 0;
}