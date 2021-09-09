#include <iostream>
#include <cstring>
using namespace std;

bool find_res(int st,int gap,int dest,int steps){
    if((steps==0))
    {
        if(st==dest)
            return true;
        else
            return false;
    }
    if(dest>st)
    {
        return find_res(st+gap,gap,dest,steps-1);
    }
    else
    {
        return find_res(st-gap,gap,dest,steps-1);
    }
}

int main() {
	//code
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t,st,gap,dest,steps;
    bool res;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cin>>st>>gap>>dest>>steps;
        res = find_res(st,gap,dest,steps);
        if(res)
            cout<<"yes"<<endl;
        else
            cout<<"no"<<endl;
    }
	return 0;
}