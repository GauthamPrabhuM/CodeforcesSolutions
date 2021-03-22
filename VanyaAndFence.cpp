// walking at a height h
// each friend below h
//  if greater than h then bend
// width normal 1, bent 2
// minimum width of road walk in a row

// n (no of friends) h , h2..hn
// a1 2h>=a1>=1 
// print minimum widt

#include<iostream>
using namespace std;


int main()
{
    int n;
    int h;
    int width=0;
    int H[65000];
    cin>>n;
    cin>>h;
    for(int i=0; i<n; i++)
    {cin>>H[i];
      if(H[i]>h)
         width++;
       width++;
    }
    cout<<width;
    
    return 0;
    
}
    
    
    
    
    
    
    
