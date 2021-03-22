#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int t[100];
    for(int i=0; i<n; i++)
    cin>>t[i];
     
    sort(t,t+n);
    for(int j=0; j<n; j++)
    cout<<t[j]<<" ";
    
    
    
    
    
}
