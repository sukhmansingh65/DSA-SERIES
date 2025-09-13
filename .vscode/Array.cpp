// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks[5] = {99, 55, 33, 22, 11};
//    int sz = sizeof(marks)/sizeof(int);
   
//    for(int i=0;i<sz;i++)
//    {
//     cout<<marks[i]<<endl;
//    }





// }
//loops on array and declare elements
// #include<iostream>
// using namespace std;
// int main()
// {
//     int marks[5];

//     for(int i=0;i<5;i++)
//     {
//         cin>>marks[i];
//     }
//    for(int i=0;i<5;i++)
//    {
//     cout<<marks[i]<<endl;
//  }
//  return 0;
// }

//Smallest element in array
#include<iostream>
using namespace std;
int main()
{
int n;
      cout<<"Enter the size of array";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++)
    {
        cin>>array[i];
    }
//output of array
for(int i=0;i<n;i++)
{
    cout<<array[i] << endl;
}
int smallest=INT8_MAX;
for(int i=0;i<n;i++)
{
//  if(array[i]<smallest){
//     smallest = array[i];
smallest = min(smallest,array[i]);
 }

cout<<"smallest array is"<<smallest<<endl;
return 0;
}