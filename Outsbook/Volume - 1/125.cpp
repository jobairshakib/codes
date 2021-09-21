#include<iostream>
using namespace std;

int main(){
    int S1,D1,D2,S2,d;
    cin>>S1>>D1>>D2>>S2;
    d=(S1*(D1-D2))/(S1+S2);
    cout<<d<<" Days"<<endl;

    return 0;
}