
#include<bits/stdc++.h>
using namespace std;
void i_o()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
int main()
{
    i_o();
  
    return 0;
}


int mergeSort(vector<int> &arr,int l,int h){
    if(l==h)
        return 0;
    int mid=(l+h)/2;
    int ans=0;
    ans+=mergeSort(arr,mid+1,h);
    ans+=mergeSort(arr,l,mid);

}

int reversePairs(vector<int> &arr, int n){
	// Write your code here.
      
    
}