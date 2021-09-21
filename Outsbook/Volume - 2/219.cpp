#include<iostream>
using namespace std;

int main(){
    int a,h,m,n;
    cin>>h>>m>>n;
    a=(2*(h-m))/(m-n);
    cout<<a+1<<endl;

    return 0;
}