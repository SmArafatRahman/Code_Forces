#include<bits/stdc++.h>
using namespace std;
int main(){
    string s,word="hello";
    cin>>s;
    int j=0;
    for(int i=0;i<s.size();i++){
        if(s[i]==word[j]){
            j++;
            if(j==5)
                break;
        }
    }
    if(j==5)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
