#include <iostream>

using namespace std;

int main()
{
    /* 10
        9
        8
        7
        6
        5
        4
        3
        2
        1
        End of for loop
        */
    for(int myValue=10;myValue>5;myValue=myValue-1)
    {
        cout<<myValue<<endl;
    }
    cout<<"End of for loop"<<endl;
    return 0;
}
