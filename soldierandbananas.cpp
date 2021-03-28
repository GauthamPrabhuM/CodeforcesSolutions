    #include <iostream>
    #include <bits/stdc++.h>
    #include<stdio.h> 
    #include<string.h>
    #include<stdio.h>
    #define ll long long
    using namespace std;
     int flag=0;
      static int x=0;
     
    void solve() 
    {
        int i, n, t, k, w;
  long long sum=0;

      cin>> k>>n>>w;
      for(i=1; i<=w; i++)
       sum = sum+(i*k);
      
  if(sum<=n)
    cout <<0<<"\n";
  
  else cout << sum - n << "\n";


      
    }



        
    





    int main()
    {
        ios::sync_with_stdio(0);
        //clrscr();
            ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
                 
                cout<<fixed;
                cout<<setprecision(10);
               // freopen("input.txt", "r", stdin);
               // freopen("output.txt", "w", stdout);
                int t= 1;
              //  cin>>t;
                for(int i=1;i<=t;i++)
                    
                                      solve();
               // cout<<x;
        
        return 0;
    }