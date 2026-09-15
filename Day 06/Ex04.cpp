#include <iostream>
using namespace std;
int main()
{
    /*
        As the use to enter a number.And find the sum of numbers from 1 to the number.
      1+2+3+4+5.........+number
    */
    int number,sum=0;
    cout<<"Enter a number to find summation:";
    cin>>number;
    for(int i=1;i<=number;i++)
    {
        sum=sum+i;
    }
    cout<<"1+2+3+....+"<<number<<"="<<sum<<endl;
    return 0;

}
/*
Enter a number to find summation:20
1+2+3+....+20=210

Process returned 0 (0x0)   execution time : 2.799 s
Press any key to continue.

Enter a number to find summation:30
1+2+3+....+30=465

Process returned 0 (0x0)   execution time : 3.054 s
Press any key to continue.


*/
