#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
int withdraw_amout;
float total_balnce;
cin>>withdraw_amout>>total_balnce;

double remaining_balance=total_balnce-(withdraw_amout+0.50);
if (withdraw_amout<=total_balnce&&withdraw_amout%5==0)
{
    cout << fixed << setprecision(2) << remaining_balance;
}
else
{
    cout<<total_balnce;
}

return 0;
}