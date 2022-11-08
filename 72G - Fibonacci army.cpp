#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int fibbo[20];
    fibbo[0]=1,fibbo[1]=1;
    for(int i=2;i<=n;i++){
        fibbo[i]=fibbo[i-2]+fibbo[i-1];
    }
    cout<<fibbo[n];
}
