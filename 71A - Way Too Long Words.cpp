#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,s;
    string word;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>> word;
        s=word.length();
        if(s>=12){
            s= s-2;
                cout<<word[0]<<s<<word[word.length()-1]<<endl;
        }
        else{
            cout<<word<<endl;
        }
    }
}
