#include<iostream>
using namespace std;

int main(){
    int arr1[100],arr2[100],n; 
    cin>>n;
    for (int i=0; i<n; i++){
    cout<<"element - "<<i<<":";
    cin>>arr1[i];
    }
    for(int i=0; i<n; i++){

        arr2[i]=arr1[i];
    }
    cout<<"First array element are:";
    for (int i=0; i<n; i++){
        
    cout<<"\t"<<arr1[i];

    }
    cout<<"\nSecond array element are:";
    for (int i=0; i<n; i++){
        
    cout<<"\t"<<arr2[i];

    }


    return 0;
}