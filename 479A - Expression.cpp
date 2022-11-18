#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int res1,res2,res3,res4,res5,res6,res7,res;
    res1=(a+b)*c;
    res2=(b+c)*a;
    res3=a*b*c;
    res4=a+(b*c);
    res5=b+(a*c);
    res6=c+(a*b);
    res7=a+b+c;
    res=max(res1,(max(res2,max(res3,max(res4,max(res5,max(res6,res7)))))));
    cout<<res<<endl;
}
