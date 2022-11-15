#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n,a,output,i,j;
    cin>>m>>n>>a;
    i=m/a;
    j=n/a;
    if(m%a!=0){
        i++;
    }
    if(n%a!=0){
        j++;
    }
    output=i*j;
    cout<<output<<endl;
}
