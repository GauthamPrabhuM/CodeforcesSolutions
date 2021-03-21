#include <bits/stdc++.h>
typedef long long int ll;
const unsigned int MOD = 1000000007;
 
using namespace std;
 
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
#ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
#endif
 
  int t;
  cin >> t;
  for (int tt = 0; tt < t; tt++)
  {
    int n;
    cin>>n;
    int a[n];
 
    for (int i = 0; i < n; i++)
    {
      cin>>a[i];
    }
    int c=0;
    for (int i = 0; i < n-1; i++)
    {
      int mi= min(a[i],a[i+1]);
 
      int ma = max(a[i], a[i + 1]);
      while (ma>mi*2)
      {
        mi=mi*2;
        c++;
      }
      
    }
    cout<<c<<"\n";
    }

  return 0;
}
