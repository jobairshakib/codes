#include<iostream>
using namespace std;

int main(){
    int X,Y,T,T1,d;
    cin>>X>>Y>>T>>T1;
    d=(T-(T1*X))/Y;
    cout<<d<<" Taka"<<endl;

    return 0;
}