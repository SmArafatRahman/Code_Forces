#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n;
    cin>>n;
    int total_number=0,lucky_number=0;
    while(n>0){
        if(n%10==7 || n%10==4){
            lucky_number++;
        }
    n=n/10;
    }
    if(lucky_number==7 || lucky_number==4)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
