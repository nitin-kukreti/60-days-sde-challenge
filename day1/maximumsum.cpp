#include <bits/stdc++.h> 
using namespace std;
long long maxSubarraySum(int arr[], int n)
{
   long long ans=-1e18;
    long long sum=0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]>=0){
            sum+=arr[i];
        }else{
            sum=0;
        }
        ans=max(ans,sum);
    }
    return ans;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        cout<<maxSubarraySum(arr,n)<<endl;
    }
    return 0;
}