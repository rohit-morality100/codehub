#include<bits/stdc++.h>
using namespace std;
/*#pragma GCC optimize("Ofast")
#pragma GCC optimize ("unroll-loops")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define rohit_pandit_welcomes_you_rohit_moralty_happy_coding ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0)
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

struct item{
    double wt;
    double pt;

};
bool cmp( item a   , item b){
    double r1=double(a.pt)/a.wt;
    double r2=double(b.pt)/b.wt;
    return r1>r2;
}
double rohit( item arr[],int n,int w){
    sort(arr,arr+n,cmp);
    double res=0;
    for(int i=0;i<n;i++){
        if(arr[i].wt<=w){
            res+=double(arr[i].pt);
            w-=arr[i].wt;
        }
        else{
            //res+=arr[i].pt*(w/arr[i].wt);
            //res+=(arr[i].pt/arr[i].wt)*w;
            res += ((arr[i].pt)*(double)(w)/(arr[i].wt));
            break;
        }
    }
    return res;
}
signed main(){
    int n;
    cin>>n;
    item arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i].wt>>arr[i].pt;
    }
    cout<<"enter the weight of the knapsack \n";
    double w;
    cin>>w;


   cout<< rohit(arr,n,w);

}