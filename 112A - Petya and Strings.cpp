#include<bits/stdc++.h>
using namespace std;
int main(){
    string s1,s2;
    cin>> s1;
    cin>>s2;
    for(int i=0;i<s1.size();i++){
            if(s1[i]<92){
                s1[i]= s1[i]+32;
            }
            if(s2[i]<92){
                s2[i]= s2[i]+32;
            }
    }
    if(s1>s2)
        cout<<"1"<<endl;
    else if(s1==s2)
        cout<<"0"<<endl;
    else if(s1<s2)
        cout<<"-1"<<endl;
}
