/*
A+  100 - 80
A   79 - 75
A-  74 - 70
B+  69 - 65
B   64 - 60
B-  59 - 55
C+  54 - 50
C   49 - 45
C-  44 - 40
D+  39 - 35
D   34 - 30
E   29 - 0
*/
#include<iostream>
using namespace std;

int main(){
    int mark=0;
    string grade="";
    cout<<"Enter your mark :";
    cin>>mark;
    if(mark > 100){
        grade= "Mark is more than 100";
    }
    else if(mark >= 80){
        grade= "A+";
    }
    else if(mark >= 75){
        grade= "A";
    }
    else if(mark >= 70){
        grade= "A-";
    }
    else if(mark >= 65){
        grade= "B+";
    }
    else if(mark >= 60){
        grade= "B";
    }
    else if(mark >= 55){
        grade= "B-";
    }
    else if(mark >= 50){
        grade= "C+";
    }
    else if(mark >= 45){
        grade= "C";
    }
    else if(mark >= 40){
        grade= "C-";
    }
    else if(mark >= 35){
        grade= "D+";
    }
    else if(mark >= 30){
        grade= "D";
    }
    else if(mark >= 0){
        grade= "E";
    }
    else{
        grade= "Mark is a negative number !";
    }

    cout<<"Your grade is "<<grade;

return 0;
}
