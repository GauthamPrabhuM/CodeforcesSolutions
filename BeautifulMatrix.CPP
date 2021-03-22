// 5* 5 24 zeros single 1 swap 2 rows/ swap 2 columns beautiful if in middle find moves

#include<iostream>
using namespace std;


int main()
{
    int A[5][5];
    int posx=0;
    int posy=0;
    int ans=0;
    for(int i=0; i<5; i++)
    for(int j=0; j<5; j++)
    {cin>>A[i][j];
     if(A[i][j]==1)
     {
         posx=i;
         posy=j;
     }
    }
    if(posx<2)
    {
        while(posx<2)
        {
            ans++;
            posx++;
        }
    }
    if(posy<2)
    {
        while(posy<2)
        {
            ans++;
            posy++;
        }
        
    }
    if(posx>2)
    {
        while(posx>2)
        {
            posx--;
            ans++;
        }
    }
    if(posy>2)
    {
        while(posy>2)
        {
            ans++;
            posy--;
        }
        
    }
    cout<<ans;
    
    return 0;
    }
    
