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
    /* Soln soln */
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    /*
    cout << setprecision(8);
    cout << num1 << endl;
    */
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int L,d,v1,v2;
    double ans= 0;
    cin>>d>>L>>v1>>v2;

    ans = (1.0*(L-d))/(v1+v2);

    cout << setprecision(8);
    cout << ans << "\n";
    
    return 0;
}
/*
    int     -2147483648 2147483647
    short   -32768      32767
*/