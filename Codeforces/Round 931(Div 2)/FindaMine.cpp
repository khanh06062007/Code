#include<bits/stdc++.h>
using namespace std;
int n,m,p;
int main(){
    int t;
    cin>>t;
    while(t--){
        cin>>n>>m;
        cout<<"? "<<1<<" "<<1<<endl;
        int x=1,y=1;
        cin>>p; 
        if(p==0){
            cout<<"! "<<1<<" "<<1<<endl;
            continue;
        }
        if(y+p>m){
            y=m;
            x+=p-m;

        }
        else y+=p;
        int r=min(y-1,n-x);
        cout<<"? "<<x<<" "<<y<<endl;
        cin>>p;
        if(p==0){
            cout<<"! "<<x<<" "<<y<<endl;
            continue;
        }
        int p1=p,p2=1;
        x=x+r,y=y-r;
        cout<<"? "<<x<<" "<<y<<endl;
        cin>>p; 
        if(p==0){
            cout<<"! "<<x<<" "<<y<<endl;
            continue;
        }
        p2=p;
        x=x-r,y=y+r;
        if(p1%2==0 && x+p1/2<=n && y-p1/2>=1){
            cout<<"? "<<x+p1/2<<" "<<y-p1/2<<endl;
            cin>>p;
            if(p==0){
                cout<<"! "<<x+p1/2<<" "<<y-p1/2<<endl;
                continue;
            }
        }
        cout<<"! "<<x-p2/2<<" "<<y+p2/2<<endl;
    }
}