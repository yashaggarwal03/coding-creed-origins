#include <bits/stdc++.h>
using namespace std;

#define PI 2*acos(0)

#define ll long long int

bool myAssert(bool b);
void testDrivenDevelopment();
int start(int argc=0, char const *argv[] = NULL);


// int n,m;
vector<int> *g;
bool *isvisited;

int main(int argc, char const *argv[])
{
    /* code */
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    /*
    cout << setprecision(8);
    cout << num1 << endl;
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n, *a;
    cin>>n;
    a = new int[n+1];

    for(int i=0; i<n; i++){     cin>>a[i];  }
    // a[n]=0;
    bool b = true;
    for(int i=0; i<n-1; i++){
        if( (a[i]&1)==0 ){ /*use coupon 2*/ }
        else if( ((a[i]&1)==1) && (a[i+1]>0) ){ a[i+1]--; /*use both coupon 1 n 2*/ }
        else{   b=false; break; }
    }

    if( ((a[n-1]&1)==0) && b  ){
        cout<<"YES\n";
    }else{  cout<<"NO\n";   }

    if(!a)delete[] a;    
    return 0;
}
