/*  एक ही नारा एक ही नाम जय श्री राम -जय श्री राम 
    कैलाश पे बैठे शिव का संदेशा आयेगा फिर पाकिस्तान में भी भगवा लहरेगा 
 खून अपना गरम हैं, क्योंकि हिन्दू अपना धर्म हैं।  */
#include<bits/stdc++.h>
#define  ull unsigned long long int
#define ll long long 
#define mod 1000000007
#define all(x) x.begin(),x.end()
#define lb lower_bound
#define ub upper_bound
#define ff first
#define ss second
#define pb push_back
#define Setbit(n)   __builtin_popcountll(n)
#define ms(a,x) memset(a,x,sizeof(a))
#define sp(n,a) cout<<fixed<<setprecision(n)<<a
#define maxa(a,n) *max_element(a,a+n)
#define mina(a,n) *min_element(a,a+n)
#define aca(a,n,x) accumulate(a,a+n,x)
const ull INF=1e18;
const  ll  N=2e5+7;
using namespace std;

#define MOD 998244353
 
 
ll POW(ll x,ll y){
      ll r=1;
      for(; y ; x= (x % MOD * x % MOD ) % MOD  ,y>>=1)
            if(y&1) r = (r % MOD * x % MOD) % MOD ;
      return r;
}


 
bool cmp(pair<ll,ll> a ,pair<ll,ll> b){
 
    return a.ff<b.ff;
    
 
   
}

ll lcm(ll a,ll b){
    ll di=__gcd(a,b);
    return (a*b)/di;
}

int  main(){
 
ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
 
ll n,m,k,i,j,t;
ll x;
cin>>n>>x;
vector<ll> coins(n),mincoins(x+1,1e9);
mincoins[0]=0;
for(i=0;i<n;i++){
    cin>>coins[i];
}
for(ll value=1;value<=x;value++){
      for(j=0;j<n;j++){
        if(value>=coins[j]){
            mincoins[value]=min(mincoins[value],mincoins[value-coins[j]]+1);
        }
      }
 


}

 cout<<(mincoins[x] == 1e9 ? -1: mincoins[x]);  
 
}