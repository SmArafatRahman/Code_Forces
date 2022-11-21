#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,a,res=0,r;
    cin>>n;
    string s;
    for(int i=0;i<n;i++){
        cin>>a;
        cin>>s;
        for(int j=0;j<a;j++){
          r=int(s[j])-96;
          if(r>res){
            res=r;
          }
        }
        cout<<res<<endl;
        res=0;
    }
}
