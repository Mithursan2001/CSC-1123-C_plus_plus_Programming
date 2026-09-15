#include<iostream>
using namespace std;
int main(){
    int i,j;
    i = 52, j = 25;
    //i = i + j;
    i += j;//unary plus
    cout<<i<<endl;

    int k=5,l=3;
    k -= l; //unary minus k = k - l;
    cout<<k<<endl;

    //priority
    cout<<"5 + 3 % 3 = "<<(5 + 3 % 3)<<endl;

    //binding
    cout<<"7-(6/2*3+(4*5))="<<(7-(6/2*3+(4*5)))<<endl;

    int a = 5, b = 6;
    //a = a + 1;
    //increment
    a++;
    cout<<a<<endl;//6
    //decrement
    b--;
    cout<<b<<endl;
    //pre-decrement
    cout<<(--a)<<endl;

    /*
    i = 4
    j = 2 * i++    08,
    i = 2 * --j    14

    current values of i and j ?

    */
return 0;
}
