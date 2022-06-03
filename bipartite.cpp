#include<bits/stdc++.h>
using namespace std;
#define rohit_pandit_welcomes_you_rohit_moralty_happy_coding ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)

vector<bool >  vis;
vector<int >col;

bool bipart=true;;

void  isbipartite(int s,int curr,vector<int >adj[]){
    if(col[s]!=-1  and col[s]!=curr){
        bipart=false;
        return ;
    }
    col[s]=curr;
    if(vis[s]){
        return ;
    }
    vis[s]=true;
    for(auto x:adj[s]){
        isbipartite(x,curr xor 1,adj);
    }
}
int  main(){
    //this is the code when we are supposed to take input fron thr keyboard --rohit_morality
    //fast;
    //int v1;
    /*ifstream rohit;
    rohit.open("rohit.txt");
    if(!rohit){
        cout<<"error as file is not in the given workspace \n";
    }
    else{
        int m,n;
        rohit>>m>>n;
        v1=m;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rohit>>v[i+1][j+1];
                if(v[i+1][j+1]){
                    addedge(i+1,j+1);
                }
            }
        }
    }
    rohit.close();
    bool vis[v1+1];
    for(int i=1;i<=v1;i++){
        vis[i]=false;
    }
    if(isbipartite){
        cout<<"the graph is  bipartite graph";
    }
    else{
        cout<<"the graph is not  bipartite";
    }*/
    rohit_pandit_welcomes_you_rohit_moralty_happy_coding;
    int n,m;
    cin>>n>>m;
    vector<int >adj[n];
    vis.resize(n,false);
    col.resize(n,-1);
    
    for(int i=0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    //(n,false);
    for(int i=0;i<n;i++){
        if(!vis[i]){
            isbipartite(i,0,adj);
        }
    }
    if(bipart){
        cout<<"graph is bipartite";
    }
    else{
        cout<<"graph is not bipartite";
    }
    return 0;
    



}