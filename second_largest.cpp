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


int largest=arr[0];
    int second_largest=arr[0];
    for(int i=0; i<5; i++){
        second_largest=largest;
        if(arr[i]>largest){
         largest=arr[i];
    }
    }
    cout<<largest<<endl;
    cout<<second_largest<<endl;
return 0;
}