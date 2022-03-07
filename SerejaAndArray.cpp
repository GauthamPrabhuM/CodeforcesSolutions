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
        ll n;
        ll m;
        cin>>n>>m;
        vector<ll> a(n);
        for(ll i=0; i<n; i++)
            cin>>a[i];
        ll add=0;
        while(m--)
        {
            ll t;
            cin>>t;
            if(t==1)
            {
                ll v;
                ll x;
                cin>>v>>x;
                a[v-1]=x-add;
            }
            else
                if(t==2)
                {
                    ll y;
                    cin>>y;
                    add+=y;
                }
                if(t==3)
                {
                    ll q;
                    cin>>q;
                    cout<<a[q-1]+add<<endl;
                }
        }

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
