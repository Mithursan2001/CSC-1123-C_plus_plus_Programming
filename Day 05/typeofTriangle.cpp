#include<iostream>
using namespace std;

int main(){
    int s1,s2,s3;
    cout<<"Enter the side 1"<<endl;
    cin>>s1;
    cout<<"Enter the side 2"<<endl;
    cin>>s2;
    cout<<"Enter the side 3"<<endl;
    cin>>s3;
    if(s1 == s2 && s2 == s3){
        cout<<"It is an equilateral triangle"<<endl;
    }
    else if(s1 == s2 || s2 == s3 || s1 == s3){
        cout<<"It is an isosceles triangle"<<endl;
    }
    else{
        cout<<"It is an scalene triangle"<<endl;
    }


    return 0;
}
