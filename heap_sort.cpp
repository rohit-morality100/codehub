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
#define outt freopen("output.txt", "w", stdout)
const int N=1e5+6;
void heapify(int arr[],int n,int i){
    int  largest=i;
    int left=2*i+1;
    int right=2*i+2;
    if(left<n   and  arr[left]>arr[largest]){
        largest=left;
    }
    if(right<n  and arr[right]>arr[largest]){
        largest=right;
    }
    if(largest!=i){
        swap(arr[i],arr[largest]);
        heapify(arr,n,largest);
    }
    
}
void buildheap(int arr[],int n){
    for(int i=(n-2)/2;i>=0;i--){
        heapify(arr,n,i);
    }
}
void  heap_sort(int arr[],int n){
    buildheap(arr,n);
    for(int i=n-1;i>=0;i--){
        swap(arr[0],arr[i]);
        heapify(arr,i,0);
    }
}
signed main(){
    //fast;
    //rohit_pandit_welcomes_you_rohit_moralty_happy_coding;
    int n;
    cout<<"enter the no of elements in the array\n";
    cin>>n;
    int arr[N];
    cout<<"enter the array elements\n";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    heap_sort(arr,n);
    cout<<"the sorted array is\n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<'\n';
    return 0;

}