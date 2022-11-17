#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0,percent;
    double ans;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>percent;
        sum+=percent;
    }
    ans = double(sum)/((1.0)*n);
    cout<<fixed<<setprecision(12)<<ans<<endl;
}
