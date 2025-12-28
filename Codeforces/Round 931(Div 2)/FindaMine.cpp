#include<bits/stdc++.h>
using namespace std;
int n,m,p;
int ask(int r,int c){
    cout<<"? "<<r<<" "<<c<<endl;
    int res; cin>>res; return res;
}
int main(){
    int t; cin>>t;
    while(t--){
        cin>>n>>m;
        int d1=ask(1,1);
        if(d1==0){
            cout<<"! 1 1"<<endl; 
            continue;
        }
        int d2=ask(1,m);
        if(d2==0){
            cout<<"! 1 "<<m<<endl; 
            continue;
        }
        int d3=ask(n,1);
        if(d3==0){
            cout<<"! "<<n<<" 1"<<endl; 
            continue;
        }
        int r1=(d1+d2-m+3)/2;
        int c1=(d1-d2+m+1)/2;
        int r2=(d1-d3+n+1)/2;
        int c2=(d1+d3-n+3)/2;
        if(r1>=1&&r1<=n&&c1>=1&&c1<=m&&ask(r1,c1)==0) 
            cout<<"! "<<r1<<" "<<c1<<endl;
        else cout<<"! "<<r2<<" "<<c2<<endl;
    }
    return 0;
}