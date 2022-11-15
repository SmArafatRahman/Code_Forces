#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,count_A=0,count_D=0;
    cin>>n;
    string s;
    cin>>s;
    for(int i=0;i<n;i++){
        if(s[i]=='A')
            count_A++;
        else
            count_D++;
    }
    if(count_A>count_D){
            cout<<"Anton"<<endl;
    }
    else if(count_A<count_D){
            cout<<"Danik"<<endl;
    }
    else if(count_A==count_D){
        cout<<"Friendship"<<endl;
    }
}
