    #include <iostream>
    #include <bits/stdc++.h>
    #include<stdio.h> 
    #include<string.h>
    #include<stdio.h>
    #define ll long long
    using namespace std;
     int flag=0;
    
     
    void solve() 
    {
     int n;
     int k;
     int count=0;
     cin>>n>>k;

     int A[51];
     for(int i=0; i<n; i++)
     cin>>A[i];
     int t=A[k-1];
     
     
     
      for(int i=0; i<n; i++)
      {
        if(A[i]>t || A[i]==t)

          { if(A[i]>0)
            count++;
           // cout<<A[i];
          }


      }
      cout<<count;



     }      
    


    //word
//l10n
//i18n
//p43s


    int main()
    {
        ios::sync_with_stdio(0);
        //clrscr();
            ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
                 
                cout<<fixed;
                cout<<setprecision(10);
            //freopen("input.txt", "r", stdin);
              //freopen("output.txt", "w", stdout);
                int t= 1;
                //cin>>t;
                for(int i=1;i<=t;i++){
                    
                    if(i==t)
                    flag=1;
                    solve();
        }
        return 0;
    }