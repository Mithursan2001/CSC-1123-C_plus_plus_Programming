#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<10;i++){
        cout<<i<<endl;
    }
    cout<<"-----"<<endl;
    for(int i=0;i<=10;i++){
        cout<<i<<endl;
    }
    cout<<"-----"<<endl;
    for(int i=10;i>0;i--){
        cout<<i<<endl;
    }
    cout<<"-----"<<endl;
    int i = 0;
    for(i = 2;i<20;i=i*2){
        cout<<i<<endl;
    }
    cout<<"-----"<<endl;
    for(int i=0;i<=10;i++){
        cout<<i<<endl;
        i = i + 3;
    }
    cout<<"-----"<<endl;
    for(int i=0;i<=10;i++){
        i = i + 3;
        cout<<i<<endl;
        i = i - 2;
    }
    cout<<"-----"<<endl;
    return 0;
}
