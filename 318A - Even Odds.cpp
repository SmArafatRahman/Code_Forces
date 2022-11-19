#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int k,n,flag=0,c=0,i,j,half,ans;
    cin>>k>>n;
    if(k%2==0)
        half=k/2;
    else
        half=k/2+1;
    if(n<=half)
        ans=n*2-1;
    else
        ans=((n-half)*2);
    cout<<ans<<endl;
}
