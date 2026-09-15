#include<iostream>
using namespace std;

int main(){
    int num1=0,num2=0;
    cout<<"Enter the number 1 :";
    cin>>num1;
    cout<<"Enter the number 2 :";
    cin>>num2;
    if(num1 < num2){
        num1 = num2;
    }
    cout<<"the bigger number is :"<<num1;

return 0;
}
