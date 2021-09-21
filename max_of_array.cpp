#include<iostream>
using namespace std;

int main()
{
int n;
cin>>n;
int arr[n];
for (int  i = 0; i < n; i++)
{
    cin>>arr[i];
}

int mx=arr[0];
for (int  i = 0; i < n; i++)
{
    mx=max(mx,arr[i]);
    cout<<"the maximum of the array  is "<<mx<<endl;
}

return 0;
}