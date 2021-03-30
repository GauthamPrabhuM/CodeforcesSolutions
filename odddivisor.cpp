    #include <iostream>
    #include <bits/stdc++.h>
    #include<stdio.h> 
    #include<string.h>

     #define ll long long
    using namespace std;
     int flag=0;
      //static int x=0;
     int digitsum(int a)
     {
      int sum=0;
      while(a)
      {
        sum+=a%10;
        a/=10;
      }
      return sum;
     }
     int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}



    void solve() 
    {

      ll n;
      cin>>n;
      while(n%2==0)
       { n/=2;}
     

      if(n>1)
        cout<<"YES"<<endl;
      else
        cout<<"NO"<<endl;
          


    }

 int main()
    {
        ios::sync_with_stdio(0);
        ios_base::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        cout<<fixed;
        cout<<setprecision(10);
        //freopen("input.txt", "r", stdin);
       // freopen("output.txt", "w", stdout);
        ll t=1;
        cin>>t;
        for(int i=1;i<=t;i++)
                    
            solve();
      
        return 0;
    }