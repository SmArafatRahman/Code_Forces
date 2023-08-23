#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count_=1;
    cin>>n;
    string s[n];
    cin>>s[0];
    for(int i=1;i<n;i++){
        cin>>s[i];
        if(s[i]!=s[i-1])
            count_++;
    }
    cout<<count_<<endl;
}

