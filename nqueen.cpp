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
bool issafe(int board[][10],int i,int j,int n){
    for(int r=0;r<i;r++){
        if(board[r][j]==1){
            return false;
        }
    }
    int x=i;
    int y=j;
    while(x>=0   and y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
    x=i;
    y=j;
    while(x>=0   and y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    return true;

}
bool solve(int board[][10],int i,int n){
    if(i==n){
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(board[i][j]==1){
                    cout<<"Q";
                }
                else{
                    cout<<"_";
                }
            }
            cout<<endl;
        }
        cout<<endl;
        return false;
    }
    for(int c=0;c<n;c++){
        if(issafe(board,i,c,n)){
            board[i][c]=1;
            bool success=solve(board,i+1,n);
        if(success){
            return true;
        }
        board[i][c]=0;
        }
        
    
    }
    return false;
}
signed main(){
    //freopen("IN", "r", stdin);
    //freopen("OUT", "w", stdout);

    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);

    int n;
    cin>>n;
    int board[10][10]={0};
    solve(board,0,n);
}