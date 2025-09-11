#include<iostream>
using namespace std;
// int sum(int a, int b)
// {
// int s=a+b;
// return s;
// }

// int minoftwo(int a, int b)
// {
//     if(a<b)
//     return a;
//     else
//     return b;
// }

int sumN(int n)
{
    int sum = 0;
    for(int i=1;i<=n;i++)
    {
        sum = sum + i;

    }
    return sum;
}



int main()
{
  cout<<sumN(5)<<endl;


    return 0;
}