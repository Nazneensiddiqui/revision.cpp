#include <iostream>
using namespace std;
 int main()
 {
 int arr[5];
 cout<<"enter 5 values \n";
 for (int i=0;i<5;i++)
    {
    cin>>arr[i];
    }
cout<<"stored data in arry\n";
 for (int i=0;i<5;i++)
    {
    arr[i]=arr[i]+1;
    cout<<arr[i]<<"\t";
    }
 }
