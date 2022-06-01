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
string s1,s2;
ll dp[64][2][2][2][2];
ll func(ll ind,ll ar,ll al,ll br,ll bl)
{
 if(ind==s1.size())
   return 0;
 if(dp[ind][ar][al][br][bl]!=-1)
   return dp[ind][ar][al][br][bl];
 ll mina=0,maxa=1;
 if(al==0 and s1[ind]=='1')
   mina=1;
 if(ar==0 and s2[ind]=='0')
   maxa = 0;
 ll maxb=1,minb=0;
 if(br==0 and s2[ind]=='0')
   maxb=0;
 if(bl==0 and s1[ind]=='1')
   minb = 1;

 ll i,j,val = 0;
 for(i=mina;i<=maxa;i++)
 {
   for(j=minb;j<=maxb;j++)
   {

     ll temp = (1LL<<(s1.size()-ind-1))*(i^j);
     ll nar,nal,nbr,nbl;
     if(ar==0 and i==s2[ind]-'0')
       nar=0;
     else
       nar=1;
     if(al==0 and i==s1[ind]-'0')
       nal=0;
     else
       nal=1;
     if(br==0 and j==s2[ind]-'0')
       nbr=0;
     else
       nbr=1;
     if(bl==0 and j==s1[ind]-'0')
       nbl=0;
     else
       nbl=1;
     val=max(val,temp+func(ind+1,nar,nal,nbr,nbl));
   }
 }
 return dp[ind][ar][al][br][bl]=val;
}
string getbin(ll num)
{
       string res="";
       while (num)
       {
               res+=((num&1)+'0');
               num/=2;
       }
       reverse(res.begin(),res.end());
       return res;
}
int main()
{
 int t;
 cin>>t;
 while(t--){
     ll l,r;
     cin>>l>>r;
     s1=getbin(l);
     s2=getbin(r);
     while(s1.size()!=s2.size())
       s1='0'+s1;
     mem(dp,-1);
     cout<<func(0,0,0,0,0)<<"\n";
 }

}