
#include<bits/stdc++.h>
using namespace std;
void i_o()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}


void rotateMatrix(vector<vector<int>> &mat, int n, int m)
{
    // Write your code here
     int top = 0, bottom = n-1, left = 0, right = m-1;
    while(top < bottom and left < right){
        int temp=mat[top][left];
        for(int i=left+1;i<=right;i++){
            int temp1=mat[top][i];
            mat[top][i]=temp;
            temp=temp1; 
        }
        for(int i=top+1;i<=bottom;i++){
            int temp1=mat[i][right];
            mat[i][right]=temp;
            temp=temp1;
        }
        for(int i=right-1;i>=left;i--){
            int temp1=mat[bottom][i];
            mat[bottom][i]=temp;
            temp=temp1;
        }
        for(int i=bottom-1;i>=top;i--){
            int temp1=mat[i][left];
            mat[i][left]=temp;
            temp=temp1;
        }
        top++;
        bottom--;
        left++;
        right--;
    }
}

int main()
{
    i_o();
  
    return 0;
}
