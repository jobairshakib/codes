#include<iostream>
using namespace std;

int main(){
    int m,p,c,d,x;
    cin>>m>>p>>c>>d;
    x=((p*c)+d)/(m-p);
    cout<<x<<" "<<x*m<<endl;

    return 0;
}