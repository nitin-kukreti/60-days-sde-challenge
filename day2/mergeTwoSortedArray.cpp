#include<bits/stdc++.h>
using namespace std;


vector<int> ninjaAndSortedArrays(vector<int>& arr1, vector<int>& arr2, int m, int n) {
	// Write your code here.
    reverse(arr1.begin(),arr1.begin()+m);
    reverse(arr2.begin(),arr2.end());
    int i=m-1;
    int p=m+n-1;
    while(i>=0 and arr2.size()){
        if(arr1[i]<arr2.back()){
            swap(arr1[i--],arr1[p--]);
        }else{
            arr1[p--]=arr2.back();
            arr2.pop_back();
        }
    }
    while(arr2.size()){
        arr1[p--]=arr2.back();
        arr2.pop_back();
    }
    reverse(arr1.begin(),arr1.end());
    return arr1;
}

int main()
{
   
  
    return 0;
}