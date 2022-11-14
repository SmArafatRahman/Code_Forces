#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c=0,flag=0;
    for(int i=0;i<s.size()-1;i++){
        if(s[i]==s[i+1]){
            c++;
            if(c==6){
                flag=1;
            }
        }
        if(s[i]!=s[i+1]){
            c=0;
        }
    }
    if(flag==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
