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
         int N;
         int M;
         cin>>N>>M;
         int A[10000];
         for(int i=0; i<N; i++)
          cin>>A[i];

         int count=0;
         int flag=0;
         if(N==M)
          {
            sort(A,A+N);
            for(int i=0; i<N; i++)
              {if(A[i]==A[i+1])
                flag=1;
              }

              if(flag==1)
                cout<<"Yes"<<endl;
              else
                cout<<"No"<<endl;


          }
          else 
            cout<<"Yes"<<endl;
    
    }



        
    





    int main()
    {
        ios::sync_with_stdio(0);
        //clrscr();
            ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
                 
                cout<<fixed;
                cout<<setprecision(10);
               freopen("input.txt", "r", stdin);
                  freopen("output.txt", "w", stdout);
                int t= 1;
              cin>>t;
                for(int i=1;i<=t;i++)
                    
                                      solve();
               // cout<<x;
        
        return 0;
    }