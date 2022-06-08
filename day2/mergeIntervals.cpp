#include<bits/stdc++.h>
using namespace std;


vector<vector<int>> mergeIntervals(vector<vector<int>> &intervals)
{
    // Write your code here.
    sort(intervals.begin(),intervals.end());
    vector<vector<int>> ans;
    for(auto it:intervals){
        if(ans.empty()){
            ans.push_back(it);
        }else{
            if(ans.back()[1]>=it[0]){
                ans.back()[1]=max( ans.back()[1],it[1]);
            }else{
                  ans.push_back(it);
            }
        }
    }
    return ans;
}



int main()
{
   
  
    return 0;
}

