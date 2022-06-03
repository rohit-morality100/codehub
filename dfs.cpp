#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")

#define mod 1000000007
#define pb push_back
#define mp make_pair
#define fi first
#define sec second
typedef long long int  ll;
typedef long double  ld;
#define pii pair<ll,ll>
#define pic pair<ll,char>
#define vi vector< ll >
#define vvi vector< vi >
#define vpi vector< pii a>
#define vvpi vector< vpi >
#define st  set <ll, greater <ll> >
#define mst  multiset <ll, greater <ll> >
#define in insert
#define sz size
#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
#define mapp  unordered_map <ll, ll>
#define ppii pair< pii, pii >
#define que queue< ll >
#define deq queue< ll >
#define mpit unordered_map<ll, ll> :: iterator
#define mpins(x,y) insert(pair <ll, ll> (x, y))
#define test(t) ll t;cin>>t;while(t--)
#define inarr(n) ll arr[n];for(ll i=0;i<n;i++)cin>>arr[i];
#define ingra(m) vvi arr(100005);for(ll i=0;i<m;i++){ll u,v;cin>>u>>v;arr[u].pb(v);arr[v].pb(u);}
#define mem(a,b) memset(a,b,sizeof(a))
#define inn freopen("input.txt", "r", stdin)
#define outt freopen("output.txt", "w", stdout)
const int n =1e5;
vector<int >mat[n];
int v[10][10];
void addedge(int i,int j,bool undir=true){
    mat[i].push_back(j);
    if(undir){
        mat[j].push_back(i);
    }
}
//this dfs is able to handle even if the graph is disconnected--by rohit_morality
void dfs(int s,bool vis[]){
    vis[s]=true;
    cout<<s<<" ";
    for(auto nbr:mat[s]){
        if(!vis[nbr]){
            dfs(nbr,vis);
        }
    }
}
signed main(){
    fast;
    int v1;
    ifstream rohit;
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
    cout<<"the dfs traversal of the graph is\n";
    for(int i=1;i<=v1;i++){
        if(!vis[i]){
            dfs(i,vis);
        }
    }

}