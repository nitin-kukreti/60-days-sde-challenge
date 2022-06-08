#include<bits/stdc++.h>
using namespace std;
void i_o()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int findMajorityElement(int arr[], int n) {
	unordered_map<int,int> mp;
    int prev=-1;
    mp[-1]=n/2+1;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
        if(mp[arr[i]]>=mp[prev]) prev=arr[i];
    }
    return prev;
}

int main()
{
    i_o();
  
    return 0;
}