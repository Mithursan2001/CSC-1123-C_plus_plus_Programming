#include<iostream>
using namespace std;
int main(){
    /*
     block comment
     declare a variable name
     It can have a-zA-Z 0-9 _
     It should not start with the a number for example 1width(wrong)
     It should not have space for example wid th(wrong)
     no special characters like * / + # @ % ^
     It should not use keywords as variable name for example int cout return
     Some correct variable names
     width
     width1
     width_1
     My_Name

     C++ is case sensitive language
      int width and int Width are different
    */
    //line comment
    // type name value
    int width = 8;
    int area = width * width;
    int perimeter = width * 4;
    cout<<"Area is :"<<area<<endl;//endl break to next line
    cout<<"Perimeter is :"<<perimeter;
    return 0;
}
