#include<bits/stdc++.h>
using namespace std;
int findDuplicate(vector<int> &arr, int n){
	// Write your code here.
    vector<bool> has(n,false);
    for(auto i:arr){
        if(has[i]){
            return i;
        }
        has[i]=true;
    }
}
int main()
{
 
  
    return 0;
}