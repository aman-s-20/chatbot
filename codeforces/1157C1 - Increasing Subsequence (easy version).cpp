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
 
bool isPrime(int n)
{
    // Corner case
    if (n <= 1)
        return false;
 
    // Check from 2 to square root of n
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0)
            return false;
 
    return true;
}
 
int computeXOR(int n)
{
   
  // If n is a multiple of 4
  if (n % 4 == 0)
    return n;
 
  // If n%4 gives remainder 1
  if (n % 4 == 1)
    return 1;
 
  // If n%4 gives remainder 2
  if (n % 4 == 2)
    return n + 1;
 
  // If n%4 gives remainder 3
  return 0;
}
 
 
bool cmp(pair<ll,ll> a ,pair<ll,ll> b){
    if(a.ff!=b.ff)
    return a.ff<b.ff;
    else return a.ss<b.ss;
 
   
}
bool cmp1(ll a,ll b){
   return (a&1)<(b&1);
   
}
 
ll lcm(ll a,ll b){
    ll di=__gcd(a,b);
    return (a*b)/di;
}
 
// void solve(ll n,ll s,ll d,ll h){
    
//     if(n==0)return ;
//     else{
//     solve(n-1,s,h,d);
//      cout<<s<<" "<<d<<endl;
//     solve(n-1,h,d,s);
// }
 
 
// }
int  main(){
 
ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
 
 
ll n,m,k,i,j,t;
   string s="";
    cin>>n;
    ll a[n];
    for(i=0;i<n;i++)cin>>a[i];
 
    ll cnt=0;
    i=0;j=n-1;
    while(i<=j){
 
        if(a[i]>cnt&&a[j]>cnt){
            if(a[i]<a[j]){
                s+='L';
                cnt=a[i];
                i++;
            }
            else{
                s+='R';
                cnt=a[j];
                j--; 
            }
        }
        else if(a[i]>cnt){
                s+='L';
                cnt=a[i];
                i++;
        }
        else if(a[j]>cnt){
                 s+='R';
                cnt=a[j];
                j--; 
        }
       
        else break;
    }    
 
     cout<<s.size()<<endl;
     cout<<s;      
 
 
}