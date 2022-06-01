#include<bits/stdc++.h>
using namespace std;
#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#include <bits/stdc++.h>
using namespace std;
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

bool solve( char mat[][10],int i,int j,int m,int n,int sol[][10]){
    if(i==m   and j==n){
        sol[i][j]=1;
        for(int i=0;i<=m;i++){
            for(int j=0;j<=m;j++){
                
                    cout<<sol[i][j];
                
            }
            cout<<endl;
        }
        cout<<endl;
        return  true;
    }
    if(i>m   or j>n){
        return false;
    }
    if(mat[i][j]=='x'){
        return false;
    }
    sol[i][j]=1;
    bool rightsuccess=solve(mat,i,j+1,m,n,sol);
    bool downsuccess=solve(mat,i+1,j,m,n,sol);
    sol[i][j]=0;
    if(rightsuccess  or downsuccess){
        return true;
    }
    return false;
}
int main(){
    //int n;
    //cin>>n;
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    char mat[10][10]={"000x0","00x0","000x","0x00"};
    int sol[10][10]={0};
    int m=4;
    int n=4;
    solve(mat,0,0,m-1,n-1,sol);





}
