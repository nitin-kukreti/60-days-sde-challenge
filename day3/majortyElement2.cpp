#include<bits/stdc++.h>
using namespace std;
void i_o()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


vector<int> majorityElementII(vector<int> &arr)
{
    // Write your code here.
    int n=arr.size();
    unordered_map<int,int> mp;
    int prev=-1;
   
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    vector<int> ans;
    for(auto it : mp){
        if(it.second > n/3) ans.push_back(it.first);
    }
    return ans;
}

int main()
{
    i_o();
  
    return 0;
}