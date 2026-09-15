#include<iostream>
using namespace std;

int main(){
    int num=0;
    cout<<"Enter a number :";
    cin>>num;
    int remainder = (num%2);
    cout<<"Remainder is :"<<remainder<<endl;
    if( remainder == 0){
        cout<<"It is an even number";
    }
    else{
         cout<<"It is an odd number";
    }

return 0;
/*
comparison operators
equal == (5 == 5)
not equal != (5 != 6)

less than <   (5 < 5)
grater than >

less than or equal <= (5 <= 5)
grater than or equal >=

*/
}
