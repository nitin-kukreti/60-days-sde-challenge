#include<bits/stdc++.h>
using namespace std;


void sort012(int *arr, int n)
{
   //   Write your code here
    int low=0,mid=0,high=n-1;
    while(mid<=high){
        switch(arr[mid]){
            case 0:
                swap(arr[low++],arr[mid++]);
                break;
            case 1:
                mid++; break;
            case 2:
                swap(arr[mid],arr[high--]);
                break;
        }
    }
    
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
   
  
    return 0;
}