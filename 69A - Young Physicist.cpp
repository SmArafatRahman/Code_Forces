#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s1=0,s2=0,s3=0;
    cin>>n;
    for(int i=0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        s1+=a;
        s2+=b;
        s3+=c;
    }
    if(s1==0 && s2==0 && s3==0){
        cout<<"YES"<<endl;
    }
    else
        cout<<"NO"<<endl;
}
