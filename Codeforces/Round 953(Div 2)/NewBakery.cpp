#include<bits/stdc++.h>
using namespace std;
const int N=1e6+3;
int k,dp[N],f[N];
long long a,b,n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        cin>>a;
        cin>>b;
        long long sum=0;
        long long l=1,r=n,vt=0;
        while(l<=r){
            int mid=(l+r)/2;
            if(b-mid+1>=a){
                vt=mid;
                l=mid+1;
            }
            else r=mid-1;
        }
        sum=b*vt-(vt-1)*vt/2+a*(n-vt);
        cout<<sum<<'\n';
    }
}