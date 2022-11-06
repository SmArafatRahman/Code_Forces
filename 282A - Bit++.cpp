#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    string a, b="X++",c="--X",d="++X",e="X--";
    for(int i=0;i<n;i++){
        cin>>a;
        if(a==b||a==d)
            sum++;
        else if(a==c||a==e)
            sum--;
    }
    cout<<sum<<endl;
}
