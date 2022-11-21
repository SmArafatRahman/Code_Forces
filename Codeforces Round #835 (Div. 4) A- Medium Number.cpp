#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,b,c,res;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        if(a<b && a>c || a>b && a<c){
            res=a;
        }
        if(b>c&& b<a || b>a && b<c){
            res=b;
        }
        if(c>a && c<b || c>b && c<a){
            res=c;
        }
        cout<<res<<endl;
    }
}
