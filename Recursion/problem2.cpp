using namespace std;

int find_fact(int a,int b, int c, int n){
    if(n==1) return a+b+c;
    int temp = a+b+c;
    a=b;
    b=c;
    c=temp;
    return find_fact(a,b,c,n-1);
}

int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        cout<<find_fact(a,b,c,n-3)<<endl;
    }
	return 0;
}