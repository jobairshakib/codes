#include<iostream>
using namespace std;

int main(){
    int arr[10]; 
    int sum=0;
    for (int i=0; i<4; i++){
    cout<<"element - "<<i<<":";
    cin>>arr[i];
    }
    for (int i=0; i<4; i++){
        sum += arr[i];
    }

        cout<<sum;
    return 0;
}