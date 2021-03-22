#include<iostream>
using namespace std;
 
 
int main()
{
    
    long long int n;
    cin>>n;
    long long int counta=0;
    long long int countd=0;
    string S;
    cin>>S;
    for(int i=0; i<n; i++)
    {
        if(S[i]=='A')
           counta++;
        if(S[i]=='D')
           countd++;
    }
    
    if(counta>countd)
        cout<<"Anton";
    if(countd>counta)
       cout<<"Danik";
    if(counta==countd)
      cout<<"Friendship";
       
       
          
              
    
    
return 0;    
}
