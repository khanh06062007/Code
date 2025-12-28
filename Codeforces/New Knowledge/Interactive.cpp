#include<iostream>
using namespace std;
string s;
int main(){
    int l=1,r=1000000,vt=0;
    while(l<=r){
        int mid=(l+r)/2;
        cout<<mid<<endl;
        cin>>s;
        if(s=="<"){       
            r=mid-1;
        }
        else{
            vt=mid;
            l=mid+1;
        }
    }
    cout<<"! "<<vt<<endl;
}