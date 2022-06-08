#include<bits/stdc++.h>
using namespace std;
void i_o()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
}

int modularExponentiation(int x, int n, int m) {
	// Write your code here.
    if(x%m<=1) return x%m;
 int res=1;
    while(n){
        if(n&1){
           res=int(((1LL)*res*(x%m))%m);
        }
        long long temp=(1LL*x%m*x%m)%m;
        x=temp;
        n>>=1;
    }
    return res;
    
    
}
int main()
{
    i_o();
  
    return 0;
}