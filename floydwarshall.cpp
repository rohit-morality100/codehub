#include<bits/stdc++.h>
using namespace std;
#define rohit_pandit_welcomes_you_rohit_moralty_happy_coding ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
//#define inf =1e5
const int  inf=1e5;
vector<vector<int >>  floyd(vector<vector<int >>graph){
    vector<vector<int >>  dist(graph);
    int v=graph.size();
    for(int k=0;k<v;k++){
        for(int i=0;i<v;i++){
            for(int j=0;j<v;j++){
                if(dist[i][j]>dist[i][k]+dist[k][j]){
                    dist[i][j]=dist[i][k]+dist[k][j];
                }
            }
        }
    }
    return dist;

}
signed  main(){
    rohit_pandit_welcomes_you_rohit_moralty_happy_coding;

    
    vector<vector<int >> graph={{0,inf,-2,inf},{4,0,3,inf},{inf,inf,0,2},{inf,-1,inf,0}};
    auto res=floyd(graph);
    for(int i=0;i<res.size();i++){
        for(int j=0;j<res.size();j++){
           cout<< res[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

}