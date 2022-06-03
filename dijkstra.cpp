#include<bits/stdc++.h>
using namespace std;
#define rohit_pandit_welcomes_you_rohit_moralty_happy_coding ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
//  this is the code using set data structure --rohit_morality
/*const int inf=1e5+9;
int  main(){
    int n,m;
    cin>>n>>m;
    vector<vector<pair<int ,int >>>  g;
    vector<int >dist(n+1,inf);
    for(int i=0;i<m;i++){
        int u;
        int v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});

    }
    set<pair<int ,int >>s;
    dist[1]=0;
    s.insert({0,1});
    while(!s.empty()){
        auto it=*(s.begin());
        s.erase(it);
        for(auto x:g[it.second]){
            if(dist[x.first]>dist[it.second]+x.second){
                s.erase({dist[x.first],x.first});
                dist[x.first]=dist[it.second]+x.second;
                s.insert({dist[x.first],x.first});
            }
        }
    }
    for(auto x:dist){
        cout<<x<<" ";
    }
    return 0;


}*/
using ii=pair<int ,int >;
using lli=long long ;
#define F first
#define S second
int n,m;
vector<ii>g[100100];
lli  dist[100100];
int vis[100100];
void dijkstra(int s){
    for(int i=1;i<=n;i++){
        dist[i]=1e5+5;
        vis[i]=0;
    }
    dist[s]=0;
    priority_queue<ii,vector<ii>,greater<ii>>pq;
    pq.push({s,0});
    while(!pq.empty()){
        ii fs=pq.top();
        pq.pop();
        if(vis[fs.F]){
            continue;
        }
        vis[fs.F]=1;
        for(auto v:g[fs.F]){
            int neigh=v.F;
            int wt=v.S;
            if(dist[neigh]>dist[fs.F]+wt){
                dist[neigh]=dist[fs.F]+wt;
                pq.push({neigh,dist[neigh]});
            }
        }
    }
    for(int i=1;i<=n;i++){
        cout<<dist[i]<<" ";
    }
    cout<<'\n';
}
void solve(){
    cin>>n>>m;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    dijkstra(1);
}
signed  main(){
    rohit_pandit_welcomes_you_rohit_moralty_happy_coding;
    solve();
}