    #include <iostream>
    #include <bits/stdc++.h>
    #include<stdio.h> 
    #include<string.h>

     #define ll long long
    using namespace std;
     int flag=0;
     ll isPrime(ll n)
     {
         ll flag=1;
       for(ll i=2; i<n; i++)
        {if(n%i==0)
          flag=0;}

        return flag;


     }
     float newPrecision(float n, float i)
{
    return floor(pow(10,i)*n)/pow(10,i);
}
char upper(char s)
{
  return (s+'a'-'A');
}
void inputarray(ll A[], ll n)
{


  for(ll i=0; i<n; i++)
    cin>>A[i];
}

     
    void solve()
{
    ll a, res = 0;
    cin>>a;

    if (a % 2050 == 0)
    {
        a /= 2050;
        while (a != 0)
        {
            res += a % 10;
            a /= 10;
        }
        cout << res << endl;
    }
    else
    {
        cout << -1 << endl;
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
        freopen("input.txt", "r", stdin);
      freopen("output.txt", "w", stdout);

        ll t=1;
       cin>>t;
        for(int i=1;i<=t;i++)
                    
           solve();
      
        return 0;
    }
