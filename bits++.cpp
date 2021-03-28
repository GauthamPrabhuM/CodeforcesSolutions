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
      for(int i=0; i<3; i++)
       {  if(s[i]=='+')
         { x++;
          break;
         }

        if(s[i]=='-')
        {
          x--;
          break;
        }
      } 


       
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
                //freopen("output.txt", "w", stdout);
                int t= 1;
                cin>>t;
                for(int i=1;i<=t;i++)
                    
                                      solve();
                cout<<x;
        
        return 0;
    }