#include <iostream>

using namespace std;

int main()
{
    /*
      1+2+3+4+5.........+20
    */
    int sum=0;
    for(int i=1;i<=20;i++)
    {
        sum=sum+i;
    }
    cout<<"1+2+3+....+20="<<sum<<endl;
    return 0;
}
/*
1+2+3+....+20=210

Process returned 0 (0x0)   execution time : 0.098 s
Press any key to continue.
*/
