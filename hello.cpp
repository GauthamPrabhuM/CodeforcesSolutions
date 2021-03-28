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
                    string s;
           cin>>s;
           int t=0;
           int i=0;
           while(s[i++]!='\0')
            t++;
           if(t>10)
           {


        
           cout<<s[0]<<t-2<<s[t-1];
           if(flag==0)
            cout<<endl;
           flag=0;


           }
       else
        {
            cout<<s;
            if(flag==0)
                cout<<endl;
        }
        flag=0;

    }


    //word
//l10n
//i18n
//p43s


    int main()
    {
        ios::sync_with_stdio(0);
            ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
                 
                cout<<fixed;
                cout<<setprecision(10);
            //freopen("input.txt", "r", stdin);
              //freopen("output.txt", "w", stdout);
                int t= 1;
                cin>>t;
                for(int i=1;i<=t;i++){
                    
                    if(i==t)
                    flag=1;
                    solve();
        }
        return 0;
    }