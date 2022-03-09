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
  #define F first
  #define S second
  #define all(x) (x).begin(), (x).end()
  #define PB push_back
  #define MP make_pair
  typedef long long ll;
     using namespace std;
ll ceil2(ll a, ll b) {
    if (a == 0) return 0;
    return (a - 1)/b + 1;
}

    void solve()
    {  
        cout << "\n";
        int n,m; 
        cin>>n>>m;
        vector<pair<int,int>> a;
        vector<pair<pair<int,int>, int>> atemp;
        map<pair<int,int>, bool> visited;
        FOR(i,0,m) {
            ll x,w; 
            cin >> x >> w;
            a.push_back({w,x});
            atemp.push_back({{x,w}, i+1});
            visited[a[i]] = true;
        }
        sort(all(a));
        for(int i=2*n; i<m; i++) visited[a[i]] = false;
        ll sum = 0;
        FOR(i,0,2*n) sum += a[i].F;
        cout << sum << "\n";
        sort(all(atemp));
        int i=0;
        int j=m-1;
        while(i<j) {
            while(!visited[{atemp[i].F.S, atemp[i].F.F}]) i++;
            while(!visited[{atemp[j].F.S, atemp[j].F.F}]) j--;
            if(i>=j) break;
            cout << atemp[i].S << " " << atemp[j].S << "\n";
            i++; j--;
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
     cin>>t;
        //sieve();
        // pre();
        for(int i=1;i<=t;i++)
                    
           solve();
      
        return 0;
    }
