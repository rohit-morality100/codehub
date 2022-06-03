#include<bits/stdc++.h>
using namespace std;
#define rohit_pandit_welcomes_you_rohit_moralty_happy_coding ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
vector<vector<int >>g;
vector<int >dist;
const int inf=1e5+5;

vector<int >  rohit(int v,int src){
    dist[src]=0;
    for(int i=0;i<v-1;i++){
        for(auto x:g){
            int u=x[0];
            int v=x[1];
            int w=x[2];
            if(dist[src]!=inf   and   dist[v]>dist[u]+w){
                dist[v]=dist[u]+w;

            }
        }
    }
    // this is the code for checking whether there is a negative wt cycle or not 

    /*for(auto x:g){
        int u=x[0];
        int v=x[1];
        int w=x[2];
        if(dist[u]!=inf   and  dist[v]>dist[u]+w){
            cout<<"negative weight cycle is found \n";
            exit(0);
        }
    }*/
    return dist;
}
signed main(){
    rohit_pandit_welcomes_you_rohit_moralty_happy_coding;
    int n,m;
    cin>>n>>m;
    dist.resize(n+1,inf);
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g.push_back({u,v,w});

    }
    auto result=rohit(n,1);
    for(int i=1;i<=n;i++){
        cout<<result[i]<<" ";

    }
    cout<<endl;

    
}