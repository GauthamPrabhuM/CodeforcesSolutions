    #include <iostream>
    #include <bits/stdc++.h>
    #include<stdio.h> 
    #include<string.h>
   #define ll long long int
   #define pb push_back
   #define cl CLOCKS_PER_SEC
   #define pi acos(-1.0)
   #define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL)
   #define flw freopen ("/Desktop/output.txt","w",stdout);
   #define flr freopen ("/Desktop/input.txt","r",stdin);
   #define fl freopen ("output.txt","w",stdout);freopen ("input.txt","r",stdin)

   #define no1s(x) __builtin_popcount(x)
   #define parity(x) __builtin_parity(x)
   #define leadingZeros(x) __builtin_clz(x)
   #define trailingZeros(x) __builtin_ctz(x)
   #define mod 1000000007

     using namespace std;
     int flag=0;
      ll gcd(ll a, ll b)
      {
        if(b==0)
          return a;
        return gcd(b,a%b);
      }
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

ll power_optimised(ll a, ll n)
{
   ll ans=1;
   while(n>0)
   {
      int last_bit=(n&1);
      if(last_bit)
        ans*=a;
      a=a*a;
      n=n>>1;

   }
   return ans;


}
 ll isOrdinary(ll n)
{
    
    ll arr[10];
    for (int i=0; i<10; i++)
        arr[i] = 0;
 
    while (n > 0)
    {
         int digit = n%10;
 
         if (arr[digit])
           return 0;
 
         arr[digit] = 1;
 
         n = n/10;
    }
    return 1;
}


   
 void solve() 
{
        ll x;
        ll y;
        ll a;
        ll b;        
        cin>>x>>y>>a>>b;

        if(x > y)
            swap(x,y);
        
        ll ans1 = 0;
        ll ans2 = 0;
        ans1 = x*a + y*a;
        ll z = y - x;
        ans2 = z*a + x * b;

        cout<<min(ans1,ans2)<<endl;

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
        for(int i=1;i<=t;i++)
                    
           solve();
      
        return 0;
    }
