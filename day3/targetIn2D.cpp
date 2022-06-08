#include<bits/stdc++.h>
using namespace std;
void i_o()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
bool find(vector<int> v,int target){
     auto it=lower_bound(all(v),target);
     if(it==v.end()||*it!=target)return false;
     return true;
}
bool findTargetInMatrix(vector < vector < int >> & mat, int m, int n, int target) {
     int low=0;
     int high=mat.size()-1;
     while(low<=high){
          int mid=(low+high)/2;
          if(mat[mid].font()<=target and mat[mid].back()>=target){
              return find(mat[mid],target);
          }else if(mat[mid][0]>target){
               high=mid-1;
          }else{
                low=mid+1;
          }
     }        
    return false;
}

int main()
{
    i_o();
  
    return 0;
}