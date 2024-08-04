#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    string a, b, temp;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>a>>b;

        temp=b[0];
        b[0]=a[0];
        a[0]=temp[0];
        cout<<a<<" "<<b<<endl;
    }
}
