#include <iostream>
using namespace std;

int main() 
{
	// your code goes here
	int k;
	int l;
	int m;
	int n;
	int d;
	int count=0;
	cin>>k>>l>>m>>n>>d;
	int flag=0;
	for(int i=1; i<d; i++)
	{
	    
	    if(i%k==0)
	    {count++;
	     flag++;
	    }
	    if(i%l==0)
	    {count++;
	     flag++;
	    }
	    if(i%m==0)
	    {
	        count++;
	        flag++;
	    }
	    if(i%n==0)
	    {count++;
	     flag++;
	    }
	    
	    if(flag>1)
	    {
	        while(flag>1)
	        {count--;
	         flag--;
	        }
	        
	    }
	    
	    flag=0;
	    
	    
	}
	count++;
	cout<<count;
	
	

	
	
	return 0;
}
