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
const int N=1e5+5;
int cost=0;


vector<int >parent(N) ;
vector<int >ranks(N);
void rohit(int r){
    parent[r]=r;
    ranks[r]=1;
}
int find_rohit(int v){
    if(v==parent[v]){
        return v;
    }
    return parent[v]=find_rohit(parent[v]);
}
void unite(int x,int y){
    x=find_rohit(x);
    y=find_rohit(y);
    if(x!=y){
        if(ranks[x]<ranks[y]){
            parent[x]=y;
            ranks[y]+=ranks[x];
        }
        else{
            parent[y]=x;
            ranks[x]+=ranks[y];
        }
    }
}
signed main(){
    rohit_pandit_welcomes_you_rohit_moralty_happy_coding;

    for(int i=0;i<N;i++){
        rohit(i);
    }
    int n,m;
    cin>>n>>m;
    vector<vector<int > >g;
    for(int i=0;i<m;i++){
        int u,v,w;
        cin>>u>>v>>w;
        g.push_back({w,u,v});
    }
    sort(g.begin(),g.end());
    for(auto x:g){
        int w=x[0];
        int u=x[1];
        int v=x[2];
        int a=find_rohit(u);
        int b=find_rohit(v);
        if(a==b){
            continue;
        }
        else{
            cost+=w;
            cout<<u<<" "<<v<<endl;
            unite(u,v);
        }
    }
    cout<<cost;
}

