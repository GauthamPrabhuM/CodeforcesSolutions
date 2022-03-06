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
  #define pii pair<int,int>
  #define FOR(i,a,b) for(int (i)=(a); i<(b); i++)
  #define ROF(i,a,b) for(int (i)=(a); i>(b); i--)
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
    ll n, k;
    cin>> n >> k;
    string s;
    cin>> s;
    char ch[k];
    vector<ll>hs(26, 0);
    for(int i=0;i < k; i++){cin>>ch[i]; hs[ch[i]-'a']++;}
    vector<ll>dp(n+1);
    dp[0] = 0;
    for(int i=1; i<=n; i++){
        if(hs[s[i-1]-'a']){
            dp[i]= dp[i-1] + 1;
        }
        else dp[i]= 0;
    }
    ll sum = 0;
    for(int i=1 ; i<=n; i++)sum+= dp[i];
    cout<< sum << "\n";

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
