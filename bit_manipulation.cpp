// #include<iostream>
// using namespace std;
// int setBit(int n, int pos){
//     return (n|(1<<pos));
// }
// int clearBit(int n,int pos){
//     int mask=~(1<<pos);
//     return (n&mask);

// }
// int main()
// {   int n;
//     int pos;
//     // cout<<setBit(5,1)<<endl;
//     cout<<clearBit(5,2)<<endl;

// return 0;
// }
#include<iostream>
using namespace std;


int updateBit(int n,int pos,int value){
    int mask=~(1<<pos);
    n=n&mask;
    return (n|(value<<pos));
}
int main()
{
cout<<updateBit(5,1,1)<<endl;
return 0;
}