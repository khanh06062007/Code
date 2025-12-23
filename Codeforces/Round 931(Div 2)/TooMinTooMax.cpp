#include<bits/stdc++.h>
using namespace std;
const int N=4e3+4;
const long long MOD=1e9+7;
#define f first
#define s second
#define ll long long
int n,m;
ll s,k,sum;
long long a[N],f1[N],f2[N],b[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);  
    int t;
    cin>>t;
    while(t--){
        cin>>n;
        s=-1e18;
        long long mi=1e18,ma=-1e18,p1=0,p2=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }        
        for(int i=1;i<=n;i++)
                if(mi>a[i]){
                    mi=a[i];
                    p1=i;
                }
        for(int j=1;j<=n;j++)
            if(p1!=j){
                if(ma<a[j]){
                    ma=a[j];
                    p2=j;
                }
            }
        for(int i=1;i<=n;i++)
            for(int j=1;j<=n;j++){
                if(i!=j && i!=p1 && i!=p2 && j!=p1 && j!=p2 && p1!=p2)
                    s=max(s,abs(mi-a[i])+abs(a[i]-a[j])+abs(a[j]-ma)+abs(ma-mi));
            }
        cout<<s<<'\n';
    }
}
