    #include <iostream>
    #include<bits/stdc++.h>
    #include<stdio.h> 
    #include<string.h>
    #include<ext/pb_ds/assoc_container.hpp>
    #include<ext/pb_ds/tree_policy.hpp>
   #define pb push_back
   #define cl CLOCKS_PER_SEC
   #define pi acos(-1.0)
   #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
   #define flw freopen ("/Desktop/misc/output.txt","w",stdout);
   #define flr freopen ("/Desktop/misc/input.txt","r",stdin);
   #define fl freopen ("output.txt","w",stdout);freopen ("input.txt","r",stdin)
  #define pii pair<ll,ll>
  #define FOR(i,a,b) for(ll (i)=(a); i<(b); i++)
  #define ROF(i,a,b) for(ll (i)=(a); i>=(b); i--)
  #define MOD 1000000007LL
  #define F first
  #define S second
  #define all(x) (x).begin(), (x).end()
  #define PB push_back
  #define MP make_pair
  typedef long long ll;
     using namespace std;

    void solve()
    {  
       ll c[1001];
       ll dp[1001][8];
       ll n;
       cin>>n;
       ll inf=1e18;
       FOR(i,0,1000){
        FOR(j,0,8){
            dp[i][j]=inf;
        }
       }
       dp[0][0]=0;
       FOR(i,1,n+1){
        cin>>c[i];
        string s;
        cin>>s;
        ll mask=0;
        for(char c:s){
            mask|=(1<<(c-'A'));
        }
        FOR(state,0,(1<<3)){
            dp[i][state]=min(dp[i][state],dp[i-1][state]);
            dp[i][state|mask]=min(dp[i-1][state]+c[i],dp[i][state|mask]);
        }
       }
       if(dp[n][7]==inf)
        cout<<-1<<endl;
       else
        cout<<dp[n][7];

        


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
     //cin>>t;
        //sieve();
        // pre();
        for(int i=1;i<=t;i++)
                    
           solve();
      
        return 0;
    }
