#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,res=0;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>k){
            res+=2;
        }
        else{
            res++;
        }
    }
    cout<<res<<endl;
}
