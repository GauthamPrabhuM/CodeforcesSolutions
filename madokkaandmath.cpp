    #include <iostream>
    #include<bits/stdc++.h>
    #include<stdio.h> 
    #include<string.h>
    #include<ext/pb_ds/assoc_container.hpp>
    #include<ext/pb_ds/tree_policy.hpp>
   #define cl CLOCKS_PER_SEC
   #define pi acos(-1.0)
   #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
   #define flw freopen ("/Desktop/misc/output.txt","w",stdout);
   #define flr freopen ("/Desktop/misc/input.txt","r",stdin);
   #define fl freopen ("output.txt","w",stdout);freopen ("input.txt","r",stdin)
  #define pii pair<ll,ll>
  #define FOR(i,a,b) for(ll (i)=(a); i<(b); i++)
  #define ROF(i,a,b) for(ll (i)=(a); i>=(b); i--)
#define MOD 1000000007
#define dbg(x) cout<<#x<<" = "<<x<<endl 
  #define F first
  #define S second
  #define all(x) (x).begin(), (x).end()
  #define PB push_back
  #define MP make_pair
  typedef long long ll;
  const ll inf = 1e18;

     using namespace std;
     const int N=1000;
     void sieve()
{
    vector<bool> isprime(N+1, 1);
    isprime[0]=isprime[1]=0;
    for(int i=2; i<=N; i++)
    {
        if(isprime[i] && i*i<=N)
        {
            for(int j=i*i; j<=N; j+=i)
            {
                isprime[j]=0;
            }
        }
    }
}
    void solve() 
    { 
        ll n;
        cin>>n;
        ll t;
        if(n%3==1)t=1;
        else t=2;
        ll sum=0;
        while(sum!=n){
            cout<<t;
            sum+=t;
            t=3-t;
        }
        cout<<endl;

    }


    
    
       


    
        
    
    
 int main()
    {
        ios::sync_with_stdio(0);
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        cout<<fixed;
        cout<<setprecision(10);
        #ifndef ONLINE_JUDGE
        fl;
    cerr << "Time : " << 1000 * ((double)clock()) / (double)CLOCKS_PER_SEC << "ms\n";   
    #endif
       
      ll t=1;
         cin>>t;
        for(int i=1;i<=t;i++)
                    
           solve();
      
        return 0;
    }
