#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int len = sizeof(arr)/sizeof(arr[0]);
    std::sort(arr, arr + len);
    for(int i=0; i<len; i++){
        cout<<arr[i];
        if(i!=len-1){
            cout<<" ";
        }
        else{
            cout<<endl;
        }
    }
}
