#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int U=0,L=0;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a')
            L++;
        else
            U++;
    }
    if(U>L){
        for(int i=0;i<s.size();i++){
            if(s[i]>='a')
                s[i]-=32;
        }
    }
    else
        for(int i=0;i<s.size();i++){
            if(s[i]<'a')
                s[i]+=32;
    }
    cout<<s<<endl;
}
