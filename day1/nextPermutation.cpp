#include <bits/stdc++.h> 
using namespace std;
vector<int> nextPermutation(vector<int> &permutation, int n)
{
    int i=n-1;
    while(i>0 and permutation[i]<=permutation[n-1])
    {
        i--;
    }
    swap(permutation.begin()+i,permutation.end());
    return permutation;

}