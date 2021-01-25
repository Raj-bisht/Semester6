#include<iostream>
using namespace std;

int binarysearch(int arr[],int l,int r ,int x)
{
    if(r>=l)
    {
       int mid=l+((r-l)/2);
       if(arr[mid]==x)
       {
           return mid;
       }
       else if(arr[mid]<x)
       {
          return binarysearch(arr,l,mid-1,x);
       }
       else{
        return binarysearch(arr,mid+1,r,x);
       }
    }
    return -1;

}
int main()
{
    int n;
    cout<<"enter array size : ";
    cin>>n;
    int arr[n];
    cout<<"enter sorted array : ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int l,r,key;
    cout<<"enter key  : ";
    cin>>key;
    int p= binarysearch(arr,0,n-1,key);
    if(p ==-1)
    {
        cout<<"element not present ";
    }
    else{
        cout<<"element present";
    }

}