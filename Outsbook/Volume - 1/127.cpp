#include<iostream>
using namespace std;

int main(){
    int X,X1,X2,d;
    cin>>X>>X1>>X2;
    d=(X-(X1+X1+X2))/3;

    cout<<"Proma "<<d+X1<<","<<" Rimi "<<d<<","<<" Monisha "<<d+(X1+X2)<<endl;

    return 0;
}