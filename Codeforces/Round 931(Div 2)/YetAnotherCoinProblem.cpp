#include<bits/stdc++.h>
using namespace std;
const int N=4e5+4;
const long long MOD=1e9+7;
#define f first
#define s second
#define ll long long
int n,m;
ll s,k,sum;
long long a[N],f[N],f2[N],b[N];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);  
    int t;
    cin>>t;
    a[1]=1;
    a[2]=3;
    a[3]=6;
    a[4]=10;
    a[5]=15;
    for(int i=1;i<=100000;i++)
        f[i]=100000;
    f[0]=0;
    for(int i=1;i<=100000;i++)
        for(int j=1;j<=5;j++)
            if(a[j]<=i && f[i-a[j]]+1<f[i])
                f[i]=f[i-a[j]]+1;
    while(t--){
        cin>>n;
        
    long long m=n,d=0;
        if(m>29){
        d=m/15;
        m=m%15;
        if(m<=14 && m>0){
            d--;
            d+=f[m+15];
        }
        else{
            d+=f[m];
        }
        }
        else d+=f[n];
        cout<<d<<'\n';
    }
}
