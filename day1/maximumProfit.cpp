#include <bits/stdc++.h> 
using namespace std;
int maximumProfit(vector<int> &prices){
   int ans=0;
   int buy=INT_MAX;
    for(auto it : prices){
        buy=min(buy,it);
        ans=max(ans,it-buy);
    }
    return ans;
}

int main()
{
    vector<int> prices = {7,1,5,3,6,4};
    cout<<maximumProfit(prices)<<endl;
    return 0;
}