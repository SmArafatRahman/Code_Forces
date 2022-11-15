#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,capacity=0,entry,exit,passenger=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>exit>>entry;
        passenger=passenger-exit;
        passenger=passenger+entry;
        if(passenger>capacity){
            capacity=passenger;
        }
    }
    cout<<capacity<<endl;
}
