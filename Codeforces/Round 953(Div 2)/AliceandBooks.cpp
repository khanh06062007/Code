#include<bits/stdc++.h>
using namespace std;
const int N=1e6+3;
int n,k,dp[N],a[N],f[N];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int res=0;
        for(int i=1;i<=n-1;i++)
        res=max(res,a[i]);
        cout<<res+a[n]<<'\n';
    }
}