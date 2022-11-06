#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,sum=0,a,arr[100000];
    cin>>n>>k;
    for(int i=0;i<n;i++){
        cin>>a;
        arr[i]=a;
    }
    for(int j=0;j<n;j++){
        if(arr[j]>=arr[k-1] && arr[j]>0)
            sum++;
    }
    cout<<sum<<endl;
}
