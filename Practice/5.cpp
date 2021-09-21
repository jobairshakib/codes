#include<iostream>
using namespace std;
 int main(){
    int num1;
    cin>>num1;
if(num1>-1&&num1<24){
    if(num1>=1&&num1<12)
        cout<<"Good Morning\n";
    else if(num1>12&&num1<18)
        cout<<"Good Afternoon\n";
    else
        cout<<"Good Night\n";
    }
else
    cout<<"Out of range";



     return 0;
 }
