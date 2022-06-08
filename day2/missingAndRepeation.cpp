#include<bits/stdc++.h>
using namespace std;
void i_o()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	// Write your code here 
	unordered_map<int,int> mp;
    pair<int,int> ans;
    for(auto i:arr){
        mp[i]++;
        if(mp[i]>1) ans.second=i;
    }
    for(int i=1;i<=n;i++){
        if(mp.find(i)==mp.end()) ans.first=i;
    }
    return ans;
}

int main()
{
    i_o();
  
    return 0;
}