#include<bits/stdc++.h>
using namespace std;
int n,a,b,p=0;
string st;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        cin>>n>>a>>b;
        cin>>st;
        int x=0,y=0;
        for(int j=1;j<=100;j++)
            for(int i=0;i<n;i++){
                if(st[i]=='N')y+=1;
                else if(st[i]=='E')x+=1;
                else if(st[i]=='S')y-=1;
                else x-=1;
                //cout<<x<<" "<<y<<'\n';
                if(a==x && b==y){
                    p=1;
                    break;
                }   
            }
        cout<<(p==1?"YES":"NO")<<'\n';
        p=0;
    }
}