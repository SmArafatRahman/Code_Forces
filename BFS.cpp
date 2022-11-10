#include<bits/stdc++.h>
using namespace std;
int par[100],d[100],col[100];
queue<int>Q;
void bfs(vector<int> g[]){
    while(!Q.empty()){
        int u= Q.front();
        Q.pop();
        for(int i =0;i<g[u].size();i++){
            int v=g[u][i];
            if(col[v]==0){
                col[v]=1;
                d[v]=d[u]+1;
                par[v]=u;
                Q.push(v);
            }
        }
    }
}
int main(){
    int n,edge,u,v;
    cin>>n;
    cin>>edge;
    vector<int> g[n];
    for(int i=0;i<edge;i++){
        cin>>u>>v;
        g[u].push_back(v);
        g[v].push_back(u);
    }
    for(int i=0;i<n;i++){
        col[i]=0;
        par[i]=-1;
        d[i]=99999;
    }
    col[0]=1;
    Q.push(0);
    d[0]=0;
    bfs(g);
    for(int i =0;i<n;i++){
        cout<<i<<" : "<<d[i]<<"\n";
    }
    int x;
    cin>>x;
    if(par[x] == -1)
        cout << "No Path" <<endl;
    else{
        while(x!=-1){
            cout<< x << "->";
            x= par[x];
        }
    }
}
/* Sample Input
 6 7
0 1
0 2
1 2
1 4
4 2
4 5
2 3 */
