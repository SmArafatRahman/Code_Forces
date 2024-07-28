#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    int t; cin>>t;
    string word;
    for(int i=0;i<t;i++){
        cin>> word;
        if(word.length() > 10){
            cout<< word[0]<< word.length()-2 << word[word.length()-1]<< endl;
        }
        else{
            cout<< word <<endl;
        }
    }
}
