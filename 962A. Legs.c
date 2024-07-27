#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,n,res;
    for(int i=0;i<n;i++){
        cin>>n;
        if(n==2 || n==4){
            res=1;
        }
        else if(n>4){
            res=(n%4);
            n= n-(res*4);
            if(n==2 || n==4){
                res++;
            }
        }
        cout<<res<<endl;
    }
}
