#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int size;
    cout<<"Enter the size of an array";
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    int smallest = INT_MAX;
    int largest = INT_MIN;
    for(int i=0;i<size;i++)
    {
        smallest = min(smallest,arr[i]);
        largest = max(largest,arr[i]);
    }
    cout<<"smallest element is "<<smallest<<endl;
    cout<<"Largest element is"<<largest<<endl;
    return 0;
}

