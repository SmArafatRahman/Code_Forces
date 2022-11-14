#include<bits/stdc++.h>
using namespace std;
int main(){
    int res=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
        if(s[i]>='a'&&s[i]<='z'){
            res++;
            for(int j=i+1;j<s.size();j++){
                if(s[i]==s[j])
                    s[j]='.';
            }
        }
    }
    if(res%2!=1){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else
        cout<<"IGNORE HIM!"<<endl;
}
