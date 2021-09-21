#include<iostream>
using namespace std;

int main()
{
int n,m,target;
cin>>n>>m>>target;

int arr[n][m];
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < m; j++)
    {
        cin>>arr[i][j];
    }
    
}
int r=0,c=m-1;
bool flag=false;
while (r<n and c>=0)
{
if (arr[r][c]==target)
{
flag=true;
}
if (arr[r][c]>target)
{
c--;
}
else
{
    r++;
}


}
if (flag)
{
    cout<<"element is found";
}
else
{
    cout<<"element does not exist";
}


return 0;
}