#include<bits/stdc++.h>
using namespace std;
void i_o()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


long long merge(int low,int high,long long *arr){
    long long inverseCount=0;
    int mid=(low+high)/2;
    int i=low,j=mid+1,k=0;
    long long temp[high-low+1];
    while(i<=mid && j<=high){
        if(arr[i]<=arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
            inverseCount+=(mid-i+1);
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=high){
        temp[k++]=arr[j++];
    }
    for(i=0;i<k;i++){
        arr[i+low]=temp[i];
    }
    return inverseCount;
}


long long mergeSort(int low,int high,long long *arr){
    if(low==high) return 0;
    long long inversionCount=0;
    int mid=(low+high)/2;
    inversionCount+=mergeSort(low,mid,arr);
    inversionCount+=mergeSort(mid+1,high,arr);
}

long long getInversions(long long *arr, int n){
    long long inversionCount=0;
    inversionCount=mergeSort(0,n-1,arr);
    return inversionCount;
    
}
int main()
{
    i_o();
  
    return 0;
}