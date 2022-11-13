#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.size();i+=2){
        for(int j=i+2;j<s.size();j+=2){
            if(s[i]>s[j]){
                char temp= s[i];
                s[i]=s[j];
                s[j]= temp;
            }
        }
    }
    cout<<s<<endl;
}
