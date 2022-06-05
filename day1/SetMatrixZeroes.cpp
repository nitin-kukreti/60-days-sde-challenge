#include <bits/stdc++.h> 
using namespace std;
void setZeros(vector<vector<int>> &matrix)
{
	// Write your code here.
    int n=matrix.size();
    int m=matrix[0].size();
    queue<pair<int,int>> q;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(matrix[i][j]==0) q.push({i,j});
        }
    }
    while(!q.empty()){
        auto top=q.front();
        q.pop();
        for(int i=0;i<n;i++) matrix[i][top.second]=0;
        for(int j=0;j<m;j++) matrix[top.first][j]=0;
    }
}

int main(){
    //  driver code
    int n,m;
    cin>>n>>m;
    vector<vector<int>> matrix(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>matrix[i][j];
        }
    }
    setZeros(matrix);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}