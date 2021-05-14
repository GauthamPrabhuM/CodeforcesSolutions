#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	//code
	 ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll a,b;
    cin >> a>> b;
    ll c=a/b;
    if(c%2!=0) cout << "YES";
    else cout << "NO";
	return 0;
}
