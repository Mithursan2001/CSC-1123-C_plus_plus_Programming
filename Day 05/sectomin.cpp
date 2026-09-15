#include<iostream>
using namespace std;

int main(){
    int inputSeconds,seconds,minutes,hours;
    cout<<"Enter the seconds for conversation :"<<endl;
    cin>>inputSeconds;
    if(inputSeconds > 0 && inputSeconds < 86400){
        hours = inputSeconds / 3600;
        inputSeconds = inputSeconds % 3600;
        minutes = inputSeconds / 60;
        seconds = inputSeconds % 60;
        cout<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds"<<endl;
    }
    else{
         cout<<"input should be less than 86400 and greater than 0"<<endl;
    }
    return 0;
}
