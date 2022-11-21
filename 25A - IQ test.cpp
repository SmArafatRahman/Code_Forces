#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c1=0,c2=0,pos1,pos2;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            c1++;
            pos1=i+1;
        }
        else if(arr[i]%2!=0){
            c2++;
            pos2=i+1;
        }
    }
    if(c1<c2){
        cout<<pos1<<endl;
    }
    else{
        cout<<pos2<<endl;
    }
}
