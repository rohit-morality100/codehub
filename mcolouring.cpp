#include<bits/stdc++.h>
using namespace std;
//vector<bool>  graph[100100];
int graph[10][10];
bool issafe(int node,int color[],int n,int col){
    for(int k=0;k<n;k++){
        if(k!=node   and  graph[k][node]==1  and   color[k]==col){
            return false;
            //lets  say node==1   and   col==3   for   node 1  and  k==2  node 2   col==3  return false
            //1->2,3,4  
        }
    }
    return true;
}
bool solve(int node,int color[],int m,int n){
    if(node==n){
        return true;
    }
    for(int i=1;i<=m;i++){
        if(issafe(node,color,n,i)){
            color[node]=i;
            if(solve(node+1,color,m,n)){
                return true;
                //    1 -1
                //   / \
                //  2-2 - 3
            }
            color[node]=0;
            
        }

    }
    return false;
}
bool graphcol(int m,int n){
    int color[n]={0};
    if(solve(0,color,m,n)){
        return true;
    }
    return false;
}
int main(){
    fstream r;
    r.open("graph.txt");
    //cout<<"enter the no of the nodes\n";
    int n;
    r>>n;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            r>>graph[i][j];
        }
    }
    //cout<<"the created  graph is \n";
    //for printing the graph
    /*for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<graph[i][j]<<" ";
        }
        cout<<endl;
    }*/
    cout<<"enter the no of col\n";
    int m;
    cin>>m;
    bool op=graphcol(m,n);
    if(op){
        cout<<"graph is colourable\n";
    }
    else{
        cout<<"graph is not colourable";
    }


    
    //cout<<graphcol(m,n);


}