//atleast 2 sure 1000 problems 3 friends

#include<iostream>
using namespace std;

int main()
{
    int n;
    int A[10000][3];
    cin>>n;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int count=0;
        for(int j=0; j<3; j++)
        {
            cin>>A[i][j];
            count+=A[i][j];
        }
        if(count>=2)
        ans++;
        
    }
    cout<<ans;
    
    
 return 0;
    
    
    
}
