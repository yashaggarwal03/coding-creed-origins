#include <bits/stdc++.h>
using namespace std;

#define PI 2*acos(0)

typedef long long int ll;
// #define ll long long int
// other popular ones=> int64_t, uint64_t => use for 10^18
ll MODULO = 1e9+7;

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

//     C(n, k) = C(n-1, k-1) + C(n-1, k)
//     C(n, 0) = C(n, n) = 1

    int c[100+1][100+1];

    for(int i=0; i<=100; i++){
        c[i][0] = 0; c[i][i]=0;
    }

    for(int i=1; i<=n; i++){
        for(int k=1; k<=i; k++){
            c[i][k] = c[i-1][k-1]+c[i-1][k];
        }
    }
    return 0;
}
