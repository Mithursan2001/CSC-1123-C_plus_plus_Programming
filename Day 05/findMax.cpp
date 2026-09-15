#include<iostream>
using namespace std;

int main(){
    int num1,num2,num3,maxNum=0;
    cout<<"Enter the number 1 : ";
    cin>>num1;
    cout<<"Enter the number 2 : ";
    cin>>num2;
    cout<<"Enter the number 3 : ";
    cin>>num3;
    maxNum = num2;
    if(num1>maxNum){
        maxNum = num1;
    }
    if(maxNum<num3){
        maxNum = num3;
    }

    cout<<"The maximum number is : "<<maxNum<<endl;
    return 0;
}
