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
         
    
        string s;
        cin>>s;
        char start='a';
        ll sum=0;
        for(int i=0;i<s.size();i++)
        {
          ll l1=abs(s[i]- start);
          ll l2=26-abs(l1);
          sum+=min(l1,l2);
            start=s[i];
        }

      cout<<sum<<endl;
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
               //  freopen("output.txt", "w", stdout);
                int t=1;
              //cin>>t;
                for(int i=1;i<=t;i++)
                    
                                      solve();
               // cout<<x;
        
        return 0;
    }
