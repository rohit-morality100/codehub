#include<bits/stdc++.h>
using namespace std;
#define rohit_pandit_welcomes_you_rohit_moralty_happy_coding ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
/*#pragma GCC optimize("Ofast")
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
//rohit_pandit_welcomes_you_rohit_moralty_happy_coding
//#define fast ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
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
#define outt freopen("output.txt", "w", stdout)*/
vector<pair<int ,int >>g[100100];
int cost=0;
void primMst(int src,int n){
    vector<bool >vis(n+1,false);
    //vis[src]=true;
    priority_queue<pair<int ,int >,vector<pair<int ,int >>,greater<pair<int ,int >>>pq;
    pq.push({0,src});
    //cout<<src<<" ";
    while(!pq.empty()){
        auto it=pq.top();
        pq.pop();
        int node=it.second;
        int wt=it.first;
        
        
        if(vis[node]){
            continue;
        }
        cost+=wt;
        vis[node]=true;
        for(auto x:g[node]){
            
            int v=x.first;
            int wt=x.second;
            cout<<node<<" "<<v<<" "<<wt;
            cout<<endl;
            if(vis[v]==false){
                pq.push({wt,v});
                //vis[v]=true;
            }

        }
    }

}
signed main(){
    rohit_pandit_welcomes_you_rohit_moralty_happy_coding;
    int n,m;
    cin>>n>>m;
    
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g[u].push_back({v,w});
        g[v].push_back({u,w});
    }
    primMst(1,n);
    cout<<"the  minimum   sapnning tree cost is\n";
    cout<<cost;

}