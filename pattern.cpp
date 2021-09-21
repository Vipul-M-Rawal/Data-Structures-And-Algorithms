#include<iostream>
using namespace std;

int main()
{int rows;
int coloumns;
cout<<"enter the number of coloumns and rows";
cin>>rows>>coloumns;
for (int  i = 1; i <=rows; i++)
{
    for (int  j  = 1; j <=coloumns; j++)
    {
        cout<<"*";
    }
    cout<<endl;
}

return 0;
}