#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,res=0,temp,half;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    sort(a, a + n, greater<int>());
    half=sum/2+1;
    sum=0;
    for(int i=0;i<n;i++){
        if(sum<half){
            sum=sum+a[i];
            res++;
        }
    }
    cout<<res<<endl;
}
