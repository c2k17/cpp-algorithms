#include <iostream>
using namespace std;

int BinaryfindElement(int arr[], int n, int key)
{
    int s,e;
    s=0;
    e=n-1;

    while(s<=e)
    {
        int mid= (s+e)/2;

        if(arr[mid]==key)
        {
            return mid;
        }

        else if(arr[mid]<key)
        {
            s=mid+1;

        }

        else if(arr[mid]>key){
            e = mid-1;
        }

    }

   
    return -1;
}


// int findElement(int arr[], int n, int key)
// {
//     for(int i=0;i<n;i++)
//     {
//         if(arr[i]==key)
//         {
//             return i+1;
//         }

       
//     }
//      return -1;
// }
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int key;
    cin>>key;

    // cout<<findElement(arr,n,key)<<endl;
        cout<<BinaryfindElement(arr,n,key)<<endl;

}