//Write a program in C++ to calculate the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n).
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,i;
    float sum=0;
    cout<<"Enter the last no. for the requried:\n";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        sum=sum+pow(i,2);
    }
    cout<<"the required sum of "<<n<<"is:\n"<<sum;
    return 0;
}