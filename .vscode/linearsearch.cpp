#include<iostream>
using namespace std;
int linearsearch(int arr[],int size,int target)
    {
        for(int i=0;i<size;i++)
        {
            if(arr[i]==target)
            {
                return i;
                
            }
        
            
        }
        return -1;
    }
    int main()
    {
int arr[]={4,5,6,7,8};

int target = 5;
cout<<linearsearch(arr,5,target)<<endl;


}