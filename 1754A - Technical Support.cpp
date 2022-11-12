#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    cin>>test;
    int flag[test];
    for(int i=0;i<test;i++){
        flag[i]=0;
    }
    for(int i=0;i<test;i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        for(int j=0;j<n;j++){
            if(s[j]=='Q'){
                flag[i]=0;
                for(int k=j+1;k<n;k++){
                    if(s[k]=='A'){
                        s[k]='C';
                        flag[i]=1;
                        break;
                    }
                }
            }
        }
    }
    for(int i=0;i<test;i++){
        if(flag[i]==1)
            cout<<"Yes"<<endl;
        else
            cout<<"No"<<endl;
    }
}
