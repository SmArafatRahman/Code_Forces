#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    for(int i=0;i<t;i++){
        int n;cin>>n;
        int a[n],First_max=0,Second_max=0,temp;
        for(int j=0;j<n;j++){
            cin>>a[j];
            if(a[j]>=First_max){
                temp=First_max;
                First_max= a[j];
                Second_max=temp;
            }
            else if(a[j]>Second_max){
                Second_max=a[j];
            }
        }
        for(int k=0;k<n;k++){
            int res;
            if(a[k]<First_max){
                res=a[k]-First_max;
            }
            else if(a[k]==First_max){
                res = First_max-Second_max;
            }
            cout<<res<<" ";
        }
        cout<<endl;
    }
}
