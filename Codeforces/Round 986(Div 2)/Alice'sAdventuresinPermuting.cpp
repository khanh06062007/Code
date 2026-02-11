#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        long long n,b,c;
        cin>>n>>b>>c;
        if(c>=n){
            cout<<n<<'\n';
            continue;
        }
        if(b==0){
            if(n-c<=2)
                cout<<n-1<<'\n';
            else cout<<-1<<'\n';
            continue;
        }
        long long k=(n-c-1)/b;
        cout<<n-(1+k)<<'\n';
    }
}