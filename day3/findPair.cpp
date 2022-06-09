#include<bits/stdc++.h>
using namespace std;
void i_o()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}
class TrieNode{
    public:
    TrieNode *one,*zero;
    long long count;
    TrieNode(){
        one=NULL;
        zero=NULL;
        count=0;
    }
};
class BinaryTrie{
    public:
    TrieNode *root;
    BinaryTrie(){
        root=new TrieNode();
        root->one=new TrieNode();
        root->zero=new TrieNode();
    }
    void insert(int num){
         TrieNode *curr=nullptr;
       if(num>=0){
           curr=root->one;
           curr->count++;
       }else{
           curr=root->zero;
           curr->count++;
       }
        for(int i=31;i>=0;i--){
           bool bit= (num>>i)&1;
              if(bit){
                    if(curr->one==NULL)
                        curr->one=new TrieNode();
                    curr=curr->one;
                    curr->count++;
              }else{
                    if(curr->zero==NULL)
                        curr->zero=new TrieNode();
                    curr=curr->zero;
                    curr->count++;
              }
        }
    }
    int query(long long num){
       TrieNode *curr=nullptr;
       int ans=0;
       if(num>=0){
           ans+=root->zero->count;
           curr=root->one;     
            for(int i=31;i>=0;i--){
            bool bit= (num>>i)&1;
            if(bit){
                if(curr->zero) ans+=curr->zero->count;
                if(curr->one==NULL)
                    break;
                curr=curr->one;
                
            }else{
                if(curr->zero==NULL)
                    break;
                curr=curr->zero;
            }
        }
           
       }else{
           num=abs(1LL*num);
           curr=root->zero;
            for(int i=31;i>=0;i--){
            bool bit= (num>>i)&1;
            if(bit){    
                if(curr->one==NULL)
                    break;
                curr=curr->one;
                
            }else{
                if(curr->one) ans+=curr->one->count;
                if(curr->zero==NULL)
                    break;
                curr=curr->zero;
            }
        }
       }
        
       
        return ans;
      
    }
};


class Solution {
public:
    int reversePairs(vector<int>& arr) {
        int n=arr.size();
        BinaryTrie bt;
    bt.insert(arr[n-1]);
    long long ans=0;
    for(int i=n-2;i>=0;i--){
      ans+=bt.query((arr[i]+1)/2);
        bt.insert(arr[i]);
    }	
    return ans;
    }
};





int main()
{

    vector<int> arr={2147483647,2147483647,2147483647,2147483647,2147483647,2147483647};
    cout<<Solution().reversePairs(arr);
    return 0;
}