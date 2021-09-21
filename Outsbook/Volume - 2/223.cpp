#include<iostream>
using namespace std;

int main(){
    int m,v,x,y;
    cin>>m>>v;
    x=(m*10+v)/100;
    y=(m*10+v)%100;
    cout<<x<<"."<<y<<" cm"<<endl;

    return 0;
}