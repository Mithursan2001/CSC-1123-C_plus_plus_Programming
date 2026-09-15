#include<iostream>
using namespace std;

int main(){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<j;
        }
         cout<<endl;
    }
    cout<<"2------"<<endl;

    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cout<<i;
        }
         cout<<endl;
    }
    cout<<"3------"<<endl;
    for(int i=5;i>0;i--){
        for(int j=0;j<5;j++){
            cout<<i;
        }
         cout<<endl;
    }
    cout<<"4------"<<endl;
    for(int i=0;i<5;i++){
        for(int j=0;j<i;j++){
            cout<<j;
        }
         cout<<endl;
    }
    cout<<"5------"<<endl;
    for(int i=5;i>0;i--){
        for(int j=0;j<i;j++){
            cout<<i;
        }
         cout<<endl;
    }
    cout<<"6------"<<endl;
   for(int i=1;i<5;i++){
        for(int j=0;j<=i;j++){
            cout<<j;
        }
         cout<<endl;
    }
    cout<<"7------"<<endl;
    for(int i=1;i<=5;i++){
        for(int j=1;j<5;j++){
            cout<<i;
        }
        for(int j=0;j<i;j++){
            cout<<j;
        }
         cout<<endl;
    }
    cout<<"8------"<<endl;
    for(int i=1;i<=5;i++){
        for(int j=5;j>i;j--){
            cout<<i;
        }
        for(int j=0;j<i;j++){
            cout<<j;
        }
         cout<<endl;
    }
    return 0;
}
