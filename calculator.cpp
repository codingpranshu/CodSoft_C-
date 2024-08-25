#include<iostream>
using namespace std;
#include<cmath>

int main(){
     double num1;
     double num2;
     double result;
     char op;
     
     cout<<"******calculator*******";
     cout<<"enter either (+,-,*,/)";
     cin>>op;
     cout<<"enter #num1 \n";
     cin>>num1;
     cout<<"enter #num2 \n";
     cin>>num2;

     switch(op){
        case '+':
        result=num1+num2;
        cout<<result;
        break;
        case '-':
        result=num1-num2;
        cout<<result;
        break;
        case '*':
        result=num1*num2;
        cout<<result;
        break;
        case '/':
        cout<<result;
        break;
        default:
        cout<<"enter a valid operator";
        break;

     }

     return 0;

}