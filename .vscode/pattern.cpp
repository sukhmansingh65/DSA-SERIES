// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<=3;i++)
//     {
//         for(int j=0;j<=3;j++)
//         {
//             cout<<"*";
//         }
//         cout<<"\n";
//     }
// }

// #include<iostream>
// using namespace std;
// int main()
// {
//     for(int i=0;i<=3;i++)
//     {
//         char ch='A';
//         for(int j=0;j<=3;j++)
//         {
//             cout<<ch;
//             ch = ch + 1;

//         }
//         cout<<endl;
//     }
// }
// #include<iostream>
// using namespace std;
// int main()
// {
//     int n=4;
//     int num=1;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             cout<<num;
//             num++;

//         }
//         cout<<endl;
//     }
//     cout<<"After pattern"<<num<<endl;//17
//     return 0;
// }

// 
#include<iostream>
using namespace std;
int main()
{
    char ch='A';
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<ch<<"\t";
            ch++;
        }
        cout<<endl;
    }
    return 0;
}