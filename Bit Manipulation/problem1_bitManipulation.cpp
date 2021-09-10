#include <iostream>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n,res=0;
	    cin>>n;
	    while(n>0)
	    {
	        if(n&1)
	        {
	            res++;
	        }
	        n = n>>1;
	    }
	    cout<<res<<endl;
	    
	}
	return 0;
}