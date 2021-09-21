#include<iostream>
using namespace std;
int main(){
    int a,X1,Q1,R1,Q2,R2,X2;
    cin>>X1>>Q1>>R1>>X2;
    a=X1*Q1+R1;
    Q2=a/X2;
    R2=a%X2;
    cout<<Q2<<" "<<R2<<endl;





    return 0;
}