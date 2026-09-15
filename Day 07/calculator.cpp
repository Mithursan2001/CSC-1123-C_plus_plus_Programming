#include<iostream>
using namespace std;

int main(){
    char mathOperator;
    float operand1,operand2;

    cout<<"Enter the operand 1 : ";
    cin>>operand1;
    cout<<"Enter the operator : ";
    cin>>mathOperator;
    cout<<"Enter the operand 2 : ";
    cin>>operand2;
    switch(mathOperator){
    case '+':
        cout<<operand1<<mathOperator<<operand2<<"="<<(operand1+operand2);
        break;
    case '-':
        cout<<operand1<<mathOperator<<operand2<<"="<<(operand1-operand2);
        break;
    case '*':
        cout<<operand1<<mathOperator<<operand2<<"="<<(operand1*operand2);
        break;
    case '/':
        cout<<operand1<<mathOperator<<operand2<<"="<<(operand1/operand2);
        break;
    default:
        cout<<"Invalid operator.";
    }
    return 0;
}
